class Solution {
public:
    long long maxRotateFunction(vector<int>& nums) {
         long long sum=0,f=0;
        long long n=nums.size();
        for(int i=0;i<n;i++){
            f+=i*nums[i];
            sum+=nums[i];
        }
        long long ans=f;
        for(int i=0;i<n-1;i++){
            f=f+sum-n*nums[n-i-1];
            ans=max(ans,f);
        }
        return ans;
    }
};