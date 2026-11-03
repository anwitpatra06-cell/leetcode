class Solution {
public:
    vector<int> v;

    void generate(int num, int freq[]) {
        if (num > 10000000) return;

        if (num > 0) {
            bool valid = true;

            for (int i = 1; i <= 9; i++) {
                if (freq[i] > 0 && freq[i] != i) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                v.push_back(num);
            }
        }

        for (int i = 1; i <= 7; i++) {
            if (freq[i] < i) {
                freq[i]++;
                generate(num * 10 + i, freq);
                freq[i]--;
            }
        }
    }

    int nextBeautifulNumber(int n) {
        int freq[10] = {0};

        generate(0, freq);

        sort(v.begin(), v.end());

        auto it = upper_bound(v.begin(), v.end(), n);

        return *it;
    }
};