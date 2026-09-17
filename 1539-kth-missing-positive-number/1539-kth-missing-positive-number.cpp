class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        map<int, int> mp;

        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]] = 1;
        }

        int cnt = 0;

        for (int i = 1; ; i++) {
            if (mp.find(i) == mp.end()) {
                cnt++;

                if (cnt == k) {
                    return i;
                }
            }
        }
    }
};