class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int tsum=0;
        int n = nums.size();
        vector<int>left(n);
        vector<int>right(n);
        vector<int>ans(n);    
        left[0]=0;
        for(int i=0;i<n;i++){
            tsum+=nums[i];
        }
        for(int i=1;i<n;i++){
            left[i]=left[i-1]+nums[i-1];
        }
        for(int i=0;i<n;i++){
            right[i]=tsum-left[i]-nums[i];
        }
        for(int i=0;i<n;i++){
            ans[i]=abs(left[i]-right[i]);
        }
        return ans;
    }
};