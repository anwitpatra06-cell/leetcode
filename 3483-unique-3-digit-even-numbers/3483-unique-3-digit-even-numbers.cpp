class Solution {
public:
    int ans = 0;
    
    void solve(vector<int>& digits, vector<bool>& used, int len, int num) {
        
        // We have formed a 3-digit number
        if (len == 3) {
            if (num % 2 == 0)
                ans++;
            return;
        }

        // Try every digit
        for (int i = 0; i < digits.size(); i++) {
            
            // This copy of the digit is already used
            if (used[i])
                continue;

            // First digit cannot be 0
            if (len == 0 && digits[i] == 0)
                continue;

            // Avoid duplicate choices at the same level
            bool already = false;
            for (int j = 0; j < i; j++) {
                if (!used[j] && digits[j] == digits[i]) {
                    already = true;
                    break;
                }
            }

            if (already)
                continue;

            // Choose
            used[i] = true;

            // Go to next position
            solve(digits, used, len + 1, num * 10 + digits[i]);

            // Backtrack
            used[i] = false;
        }
    }

    int totalNumbers(vector<int>& digits) {
        vector<bool> used(digits.size(), false);

        solve(digits, used, 0, 0);

        return ans;
    }
};