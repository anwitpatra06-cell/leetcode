class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        // suf[i] = how many characters from the END of word2
        // can be matched exactly using word1[i...n-1]
        vector<int> suf(n + 1, 0);

        int j = m - 1;

        for (int i = n - 1; i >= 0; i--) {
            suf[i] = suf[i + 1];

            if (j >= 0 && word1[i] == word2[j]) {
                suf[i]++;
                j--;
            }
        }

        vector<int> ans;

        int j2 = 0;
        bool usedMismatch = false;

        for (int i = 0; i < n && j2 < m; i++) {

            // Exact match
            if (word1[i] == word2[j2]) {
                ans.push_back(i);
                j2++;
            }

            // Mismatch
            else if (!usedMismatch) {

                // If we take this mismatch,
                // can the rest of word2 be matched exactly?
                int remaining = m - j2 - 1;

                if (suf[i + 1] >= remaining) {
                    ans.push_back(i);
                    j2++;
                    usedMismatch = true;
                }
            }
        }

        if (ans.size() == m)
            return ans;

        return {};
    }
};