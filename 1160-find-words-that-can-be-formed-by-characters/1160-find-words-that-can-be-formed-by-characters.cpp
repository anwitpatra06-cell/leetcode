class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;

        int freq[26] = {};

        for(int i = 0; i < chars.size(); i++) {
            freq[chars[i] - 'a']++;
        }

        for(int i = 0; i < words.size(); i++) {

            int temp[26] = {};

            for(int j = 0; j < words[i].size(); j++) {
                temp[words[i][j] - 'a']++;
            }

            bool good = true;

            for(int x = 0; x < 26; x++) {
                if(temp[x] > freq[x]) {
                    good = false;
                    break;
                }
            }

            if(good) {
                ans += words[i].size();
            }
        }

        return ans;
    }
};