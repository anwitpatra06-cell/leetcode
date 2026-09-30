class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        int balance = 0;

        // First loop: remove invalid ')'
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                balance++;
            }
            else if (s[i] == ')') {
                if (balance > 0) {
                    balance--;
                }
                else {
                    s[i] = '#';   // mark for removal
                }
            }
        }

        // Second loop: remove extra '(' from right
        for (int i = s.size() - 1; i >= 0 && balance > 0; i--) {
            if (s[i] == '(') {
                s[i] = '#';
                balance--;
            }
        }

        // Build answer
        string ans = "";

        for (char c : s) {
            if (c != '#') {
                ans += c;
            }
        }

        return ans;
    }
};