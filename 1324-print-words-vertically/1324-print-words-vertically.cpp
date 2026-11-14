class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> words;
        string temp = "";
        vector<string>ans;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                words.push_back(temp);
                temp = "";
            } else {
                temp += s[i];
            }
        }
        words.push_back(temp);
        int mx = 0;

        for (int i = 0; i < words.size(); i++) {
            mx = max(mx, (int)words[i].size());
        }
        for (int i = 0; i < mx; i++) {
            string temp = "";

            for (int j = 0; j < words.size(); j++) {
                if (i < words[j].size()) {
                    temp += words[j][i];
                } else {
                    temp += ' ';
                }
            }

            // Remove trailing spaces
            while (temp.back() == ' ') {
                temp.pop_back();
            }

            ans.push_back(temp);
        }
        return ans;
    }
};