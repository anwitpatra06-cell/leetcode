
class Solution {
public:
    bool isNumber(string s) {
        for(int i = 0; i < s.size(); i++) {
            if(!isdigit(s[i])) {
                return false;
            }
        }
        return true;
    }

    int maximumValue(vector<string>& strs) {
        int ans = 0;

        for(int i = 0; i < strs.size(); i++) {
            int val;

            if(isNumber(strs[i])) {
                val = stoi(strs[i]);
            }
            else {
                val = strs[i].size();
            }

            ans = max(ans, val);
        }

        return ans;
    }
};
