class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;

        for(int i = 0; i < intervals.size(); i++) {

            // Current interval is completely before newInterval
            if(intervals[i][1] < newInterval[0]) {
                ans.push_back(intervals[i]);
            }

            // Current interval is completely after newInterval
            else if(intervals[i][0] > newInterval[1]) {
                ans.push_back(newInterval);

                // Add all remaining intervals
                for(int j = i; j < intervals.size(); j++) {
                    ans.push_back(intervals[j]);
                }

                return ans;
            }

            // They overlap
            else {
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);
            }
        }

        // If newInterval wasn't inserted yet
        ans.push_back(newInterval);

        return ans;
    }
};