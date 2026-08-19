class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        map<int, set<int>> seats;

        for (auto x : reservedSeats) {
            seats[x[0]].insert(x[1]);
        }

        long long ans = 2LL * (n - seats.size());

        for (auto &row : seats) {
            set<int> s = row.second;

            bool left = true;
            bool middle = true;
            bool right = true;

            // 2,3,4,5
            for (int j = 2; j <= 5; j++) {
                if (s.count(j)) {
                    left = false;
                    break;
                }
            }

            // 4,5,6,7
            for (int j = 4; j <= 7; j++) {
                if (s.count(j)) {
                    middle = false;
                    break;
                }
            }

            // 6,7,8,9
            for (int j = 6; j <= 9; j++) {
                if (s.count(j)) {
                    right = false;
                    break;
                }
            }

            if (left && right)
                ans += 2;
            else if (left || middle || right)
                ans += 1;
        }

        return ans;
    }
};