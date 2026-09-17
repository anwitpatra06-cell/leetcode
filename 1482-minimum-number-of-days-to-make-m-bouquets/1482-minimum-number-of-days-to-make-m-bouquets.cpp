class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size())
    return -1;
    int ans;
    int n=bloomDay.size();
        int st = *min_element(bloomDay.begin(), bloomDay.end());
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        while (st <= end) {
            int mid = (st + end) / 2;
            int cnt = 0;
            int bouquets = 0;

            for (int i = 0; i < n; i++) {
                if (bloomDay[i] <= mid) {
                    cnt++;

                    if (cnt == k) {
                        bouquets++;
                        cnt = 0;
                    }
                } else {
                    cnt = 0;
                }
            }
            if(bouquets>=m){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }
};