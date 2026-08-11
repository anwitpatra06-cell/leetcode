class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();

        sort(citations.begin(), citations.end());

        int maxh = 0;

        for (int i = 0; i < n; i++) {
            int h = n - i;

            if (citations[i] >= h) {
                maxh = max(maxh, h);
            }
        }

        return maxh;
    }
};