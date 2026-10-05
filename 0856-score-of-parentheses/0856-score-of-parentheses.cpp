class Solution {
public:
    int scoreOfParentheses(string s) {
        int dept = 0;
        int score = 0;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(') {
                dept++;
            }

            // Direct ()
            if (s[i] == '(' && s[i + 1] == ')') {
                score += pow(2, dept - 1);
            }

            if (s[i] == ')') {
                dept--;
            }
        }

        return score;
    }
};