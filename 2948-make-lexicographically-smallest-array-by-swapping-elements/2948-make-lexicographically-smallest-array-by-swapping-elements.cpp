class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {

        int n = nums.size();

        // 1. Store {value, original index}
        vector<pair<int,int>> v;

        for(int i = 0; i < n; i++) {
            v.push_back({nums[i], i});
        }

        // 2. Sort by value
        sort(v.begin(), v.end());

        // 3. Find groups
        int start = 0;

        while(start < n) {

            int end = start + 1;

            // Keep adding elements while adjacent values
            // differ by <= limit
            while(end < n &&
                  v[end].first - v[end - 1].first <= limit) {
                end++;
            }

            // 4. We have one group: [start, end)
            
            vector<int> indices;
            vector<int> values;

            for(int i = start; i < end; i++) {
                values.push_back(v[i].first);
                indices.push_back(v[i].second);
            }

            // 5. Sort original indices
            sort(indices.begin(), indices.end());

            // values are already sorted because v was sorted

            // 6. Put smallest value at smallest index
            for(int i = 0; i < indices.size(); i++) {
                nums[indices[i]] = values[i];
            }

            // 7. Move to next group
            start = end;
        }

        return nums;
    }
};