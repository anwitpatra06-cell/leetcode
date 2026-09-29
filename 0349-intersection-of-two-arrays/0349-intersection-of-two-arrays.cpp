class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> a;
        set<int> b;

        for (int i = 0; i < nums1.size(); i++) {
            a.insert(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++) {
            b.insert(nums2[i]);
        }

        vector<int> common;

        set_intersection(
            a.begin(), a.end(),
            b.begin(), b.end(),
            back_inserter(common)
        );

        return common;
    }
};