class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int>a;
        for(int i=n-k;i<n;i++){
            a.push_back(nums[i]);
        }
        // reverse(a.begin(),a.end());
        for(int i=0;i<n-k;i++){
            a.push_back(nums[i]);
        }
        nums=a;
    }
};