class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int ans = 0;

        for (int i = 0; i < houses.size(); i++) {
            int mn = INT_MAX;

            for (int j = 0; j < heaters.size(); j++) {
                int d = abs(houses[i] - heaters[j]);
                mn = min(mn, d);
            }

            ans = max(ans, mn);
        }

        return ans;
    }
};