class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;

        for(int i = 0; i < nums1.size(); i++) {

            int pos = -1;

            // Find nums1[i] in nums2
            for(int j = 0; j < nums2.size(); j++) {

                if(nums1[i] == nums2[j]) {

                    // Search to the right
                    for(int x = j + 1; x < nums2.size(); x++) {

                        if(nums2[x] > nums1[i]) {
                            pos = nums2[x];
                            break;
                        }
                    }

                    break;
                }
            }

            ans.push_back(pos);
        }

        return ans;
    }
};