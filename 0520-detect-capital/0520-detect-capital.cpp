class Solution {
public:
    bool detectCapitalUse(string s) {
        int upper = 0;
        int lower = 0;

        for (char c : s) {
            if (c >= 'A' && c <= 'Z')
                upper++;
            else
                lower++;
        }

        // All uppercase
        if (upper == s.size())
            return true;

        // All lowercase
        if (lower == s.size())
            return true;

        // First letter uppercase, rest lowercase
        if (s[0] >= 'A' && s[0] <= 'Z' && lower == s.size() - 1)
            return true;

        return false;
    }
};