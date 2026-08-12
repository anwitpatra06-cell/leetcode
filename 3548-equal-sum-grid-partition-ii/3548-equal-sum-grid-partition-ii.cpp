class Solution {
public:

    // Check whether we can remove a cell with value diff
    // from a horizontal section.
    bool checkHorizontal(vector<vector<int>>& grid,
                         long long diff,
                         int r1, int r2,
                         int n,
                         unordered_map<long long, int>& freq) {

        int height = r2 - r1 + 1;

        // Section is at least 2 x 2.
        // Removing ANY cell keeps it connected.
        if (height > 1 && n > 1) {
            return freq[diff] > 0;
        }

        // Section is 1 x n.
        // Only the two endpoints can be removed.
        if (height == 1 && n > 1) {
            return grid[r1][0] == diff ||
                   grid[r1][n - 1] == diff;
        }

        // Section is height x 1.
        // Only top/bottom endpoint can be removed.
        if (n == 1 && height > 1) {
            return grid[r1][0] == diff ||
                   grid[r2][0] == diff;
        }

        // Section is 1 x 1.
        // Removing it would make the section empty.
        return false;
    }


    // Check whether we can remove a cell with value diff
    // from a vertical section.
    bool checkVertical(vector<vector<int>>& grid,
                       long long diff,
                       int c1, int c2,
                       int m,
                       unordered_map<long long, int>& freq) {

        int width = c2 - c1 + 1;

        // Section is at least 2 x 2.
        if (m > 1 && width > 1) {
            return freq[diff] > 0;
        }

        // Section is 1 x width.
        // Only left/right endpoint can be removed.
        if (m == 1 && width > 1) {
            return grid[0][c1] == diff ||
                   grid[0][c2] == diff;
        }

        // Section is m x 1.
        // Only top/bottom endpoint can be removed.
        if (width == 1 && m > 1) {
            return grid[0][c1] == diff ||
                   grid[m - 1][c1] == diff;
        }

        // Section is 1 x 1.
        return false;
    }


    bool canPartitionGrid(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        long long total = 0;

        // Total sum
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                total += grid[i][j];
            }
        }


        // =====================================================
        //                 HORIZONTAL CUT
        // =====================================================

        unordered_map<long long, int> topFreq;
        unordered_map<long long, int> bottomFreq;

        // Initially everything is in bottom.
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                bottomFreq[grid[i][j]]++;
            }
        }

        long long topSum = 0;

        for (int i = 0; i < m - 1; i++) {

            // Move row i from bottom -> top
            for (int j = 0; j < n; j++) {

                topSum += grid[i][j];

                topFreq[grid[i][j]]++;
                bottomFreq[grid[i][j]]--;
            }

            long long bottomSum = total - topSum;

            // Already equal
            if (topSum == bottomSum)
                return true;


            // Bottom is larger
            if (bottomSum > topSum) {

                long long diff = bottomSum - topSum;

                if (checkHorizontal(
                        grid,
                        diff,
                        i + 1,
                        m - 1,
                        n,
                        bottomFreq)) {
                    return true;
                }
            }

            // Top is larger
            else {

                long long diff = topSum - bottomSum;

                if (checkHorizontal(
                        grid,
                        diff,
                        0,
                        i,
                        n,
                        topFreq)) {
                    return true;
                }
            }
        }


        // =====================================================
        //                  VERTICAL CUT
        // =====================================================

        unordered_map<long long, int> leftFreq;
        unordered_map<long long, int> rightFreq;

        // Initially everything is in right.
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                rightFreq[grid[i][j]]++;
            }
        }

        long long leftSum = 0;

        for (int j = 0; j < n - 1; j++) {

            // Move column j from right -> left
            for (int i = 0; i < m; i++) {

                leftSum += grid[i][j];

                leftFreq[grid[i][j]]++;
                rightFreq[grid[i][j]]--;
            }

            long long rightSum = total - leftSum;

            // Already equal
            if (leftSum == rightSum)
                return true;


            // Right is larger
            if (rightSum > leftSum) {

                long long diff = rightSum - leftSum;

                if (checkVertical(
                        grid,
                        diff,
                        j + 1,
                        n - 1,
                        m,
                        rightFreq)) {
                    return true;
                }
            }

            // Left is larger
            else {

                long long diff = leftSum - rightSum;

                if (checkVertical(
                        grid,
                        diff,
                        0,
                        j,
                        m,
                        leftFreq)) {
                    return true;
                }
            }
        }

        return false;
    }
};