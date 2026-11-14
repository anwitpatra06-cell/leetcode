
class Solution {
public:
    int numSplits(string s) {
        vector<int> left(26, 0), right(26, 0);

        int n = s.size();

        // Initially, all characters are on the right
        for(int i = 0; i < n; i++) {
            right[s[i] - 'a']++;
        }

        int l = 0, r = 0, ans = 0;

        // Count distinct characters on the right
        for(int i = 0; i < 26; i++) {
            if(right[i] > 0)
                r++;
        }

        // Move characters from right to left
        for(int i = 0; i < n-1; i++) {

            int x = s[i] - 'a';

            // First occurrence on left
            if(left[x] == 0)
                l++;

            left[x]++;

            // Remove character from right
            right[x]--;

            // Character no longer exists on right
            if(right[x] == 0)
                r--;

            // Check distinct character counts
            if(l == r)
                ans++;
        }

        return ans;
    }
};
