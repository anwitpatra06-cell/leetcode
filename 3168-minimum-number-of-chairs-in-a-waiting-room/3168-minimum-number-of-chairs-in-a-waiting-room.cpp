class Solution {
public:
    int minimumChairs(string s) {
        int c = 0, ans = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'E') {
                c++;
            }
            else {
                c--;
            }

            ans = max(ans, c);
        }

        return ans;
    }
};