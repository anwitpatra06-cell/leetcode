class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);

        string a = s;
        string b = s;

        // Find first digit that is not 9
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '9') {
                char x = s[i];

                for (int j = 0; j < s.size(); j++) {
                    if (s[j] == x) {
                        a[j] = '9';
                    }
                }
                break;
            }
        }

        // Replace all occurrences of the first digit with 0
        char y = s[0];

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == y) {
                b[i] = '0';
            }
        }

        int maxi = stoi(a);
        int mini = stoi(b);

        return maxi - mini;
    }
};