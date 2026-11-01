class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int ans=INT_MAX; string s; int x;
        int n=nums.size();
        for(int i=0;i<n-1;i+=2){
             s=to_string(nums[i])+to_string(nums[i+1]);
             x =stoi(s);
            ans=min(ans,x);
        }
        return ans;
    }
};