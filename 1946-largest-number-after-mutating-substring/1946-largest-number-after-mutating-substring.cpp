class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        for (int i = 0; i < num.size(); i++) {
            int digit = num[i] - '0';
            if (change[digit] > digit) {
                int j = i;
                while (j < num.size()) {
                    int d = num[j] - '0';
                    if (change[d] < d) {
                        break;
                    }

                    num[j] = change[d] + '0';
                    j++;
                }
                break;
            }
        }
        return num;
    }
};