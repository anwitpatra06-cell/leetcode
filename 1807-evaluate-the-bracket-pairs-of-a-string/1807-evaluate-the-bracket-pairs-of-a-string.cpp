class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string, string> mp;

        for (int i = 0; i < knowledge.size(); i++) {
            mp[knowledge[i][0]] = knowledge[i][1];
        }

        string ans;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(') {

                string st;
                int j = i + 1;

                while (s[j] != ')') {
                    st += s[j];
                    j++;
                }

                if (mp.find(st) != mp.end()) {
                    ans += mp[st];
                }
                else {
                    ans += "?";
                }

                i = j;
            }
            else {
                ans += s[i];
            }
        }

        return ans;
    }
};