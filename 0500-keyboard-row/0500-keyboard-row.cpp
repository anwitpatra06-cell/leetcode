
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set<char> s1 = {'q','w','e','r','t','y','u','i','o','p'};
        set<char> s2 = {'a','s','d','f','g','h','j','k','l'};
        set<char> s3 = {'z','x','c','v','b','n','m'};

        vector<string> ans;

        for (int i = 0; i < words.size(); i++) {
            string w = words[i];

            int row = 0;
            char ch = tolower(w[0]);

            if (s1.find(ch) != s1.end()) row = 1;
            else if (s2.find(ch) != s2.end()) row = 2;
            else row = 3;

            bool valid = true;

            for (int j = 1; j < w.size(); j++) {
                ch = tolower(w[j]);

                if (row == 1 && s1.find(ch) == s1.end()) {
                    valid = false;
                    break;
                }
                else if (row == 2 && s2.find(ch) == s2.end()) {
                    valid = false;
                    break;
                }
                else if (row == 3 && s3.find(ch) == s3.end()) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                ans.push_back(w);
            }
        }

        return ans;
    }
};
