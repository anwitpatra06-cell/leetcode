class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        int n = s1.size();
        vector<vector<string>> ans;

        int i = 0;

        while (i < n) {

            if (s1[i] != s2[i]) {

                int start = i;

                while (i < n && s1[i] != s2[i]) {
                    i++;
                }

                int len = i - start;

                string sub1 = s1.substr(start, len);
                string sub2 = s2.substr(start, len);

                ans.push_back({sub1, sub2});
            }
            else {
                i++;
            }
        }

        return ans;
    }
};