class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        int n = landStartTime.size();
        int m = waterStartTime.size();

        // water[i] = {start time, duration}
        vector<pair<int,int>> water;
        for(int i = 0; i < m; i++) {
            water.push_back({waterStartTime[i], waterDuration[i]});
        }

        sort(water.begin(), water.end());

        // prefix minimum duration
        vector<int> pref(m);
        pref[0] = water[0].second;

        for(int i = 1; i < m; i++) {
            pref[i] = min(pref[i-1], water[i].second);
        }

        // suffix minimum (start + duration)
        vector<int> suff(m);
        suff[m-1] = water[m-1].first + water[m-1].second;

        for(int i = m-2; i >= 0; i--) {
            suff[i] = min(suff[i+1],
                          water[i].first + water[i].second);
        }

        int ans = INT_MAX;

        // LAND -> WATER
        for(int i = 0; i < n; i++) {

            int landFinish = landStartTime[i] + landDuration[i];

            // first water ride whose start > landFinish
            int pos = upper_bound(
                water.begin(),
                water.end(),
                make_pair(landFinish, INT_MAX)
            ) - water.begin();

            // water rides that have already opened
            if(pos > 0) {
                ans = min(ans,
                          landFinish + pref[pos-1]);
            }

            // water rides that open later
            if(pos < m) {
                ans = min(ans, suff[pos]);
            }
        }


        // Now prepare LAND for WATER -> LAND

        vector<pair<int,int>> land;
        for(int i = 0; i < n; i++) {
            land.push_back({landStartTime[i], landDuration[i]});
        }

        sort(land.begin(), land.end());

        vector<int> prefLand(n);
        prefLand[0] = land[0].second;

        for(int i = 1; i < n; i++) {
            prefLand[i] = min(prefLand[i-1],
                              land[i].second);
        }

        vector<int> suffLand(n);
        suffLand[n-1] =
            land[n-1].first + land[n-1].second;

        for(int i = n-2; i >= 0; i--) {
            suffLand[i] =
                min(suffLand[i+1],
                    land[i].first + land[i].second);
        }

        // WATER -> LAND
        for(int i = 0; i < m; i++) {

            int waterFinish =
                waterStartTime[i] + waterDuration[i];

            int pos = upper_bound(
                land.begin(),
                land.end(),
                make_pair(waterFinish, INT_MAX)
            ) - land.begin();

            // Land rides already open
            if(pos > 0) {
                ans = min(ans,
                          waterFinish + prefLand[pos-1]);
            }

            // Land rides opening later
            if(pos < n) {
                ans = min(ans, suffLand[pos]);
            }
        }

        return ans;
    }
};