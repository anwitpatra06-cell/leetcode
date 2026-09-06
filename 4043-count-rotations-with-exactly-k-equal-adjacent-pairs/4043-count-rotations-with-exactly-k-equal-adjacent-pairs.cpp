#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int equalPairs = 0;

        // Count equal adjacent pairs on the circle
        for (int i = 0; i < n; i++) {
            if (s[i] == s[(i + 1) % n]) {
                equalPairs++;
            }
        }

        // If we exclude an equal pair
        if (k == equalPairs - 1) {
            return equalPairs;
        }

        // If we exclude a different pair
        if (k == equalPairs) {
            return n - equalPairs;
        }

        return 0;
    }
};