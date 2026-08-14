class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();

        vector<int> result(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {

                int a = num1[i] - '0';
                int b = num2[j] - '0';

                int product = a * b;

                result[i + j + 1] += product;

                result[i + j] += result[i + j + 1] / 10;

                result[i + j + 1] %= 10;
            }
        }

 string ans = "";

        int i = 0;

        while (i < result.size() && result[i] == 0) {
            i++;
        }

        while (i < result.size()) {
            ans += char(result[i] + '0');
            i++;
        }

        return ans == "" ? "0" : ans;    }
};