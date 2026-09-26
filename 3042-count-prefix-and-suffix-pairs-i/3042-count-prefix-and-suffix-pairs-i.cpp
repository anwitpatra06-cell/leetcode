class Solution {
public:

    bool isPrefixAndSuffix(string a, string b) {

        if (a.size() > b.size()) {
            return false;
        }

        // Check prefix
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }

        // Check suffix
        int start = b.size() - a.size();

        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[start + i]) {
                return false;
            }
        }

        return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {

        int count = 0;

        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {

                if (isPrefixAndSuffix(words[i], words[j])) {
                    count++;
                }
            }
        }

        return count;
    }
};