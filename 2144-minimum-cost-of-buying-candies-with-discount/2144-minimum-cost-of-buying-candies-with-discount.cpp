class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());

        int price = 0;
        int n = cost.size();

        for (int i = n - 1; i >= 0; i--) {
            price += cost[i];

            if (i - 1 >= 0) {
                price += cost[i - 1];
                i -= 2;
            }
        }

        return price;
    }
};