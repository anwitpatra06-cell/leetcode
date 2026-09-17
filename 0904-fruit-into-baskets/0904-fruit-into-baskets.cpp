class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int, int> mp;
        int left = 0;
        int ans = 0;
        int n = fruits.size();

        for (int i = 0; i < n; i++) {
            mp[fruits[i]]++;

            while (mp.size() > 2) {
                mp[fruits[left]]--;

                if (mp[fruits[left]] == 0) {
                    mp.erase(fruits[left]);
                }

                left++;
            }

            ans = max(ans, i - left + 1);
        }

        return ans;
    }
};