class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;

        int n = s.size();

        for (int st = 0; st < n; st++) {
            if (goal[st] != s[0]) continue;

            bool ok = true;

            for (int i = 0; i < n; i++) {
                if (s[i] != goal[(st + i) % n]) {
                    ok = false;
                    break;
                }
            }

            if (ok) return true;
        }

        return false;
    }
};