class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int ans =-1;
        for (int i = 0; i < nums.size(); i++) {
            int mn = *min_element(nums.begin() + i, nums.begin() + n);
            int mx = *max_element(nums.begin(), nums.begin()+i+1);
            if(mx-mn<=k){
                return i;
                break;
            }
        }
        return -1;
    }
};