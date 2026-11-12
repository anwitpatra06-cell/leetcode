class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int p) {
        int lp=0,ep=0,gp=0;
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]>p){
                gp++;
            }
            else if(nums[i]<p){
                lp++;
            }
            else{
                ep++;
            }
        }
            int x=0,y=lp,z=n-gp;
            for(int i=0;i<n;i++){
                if(nums[i]<p){
                    ans[x]=nums[i];
                    x++;
                }
                else if(nums[i]>p && z<n){
                    ans[z]=nums[i];
                    z++;
                }
                else{
                    ans[y]=nums[i];
                    y++;
                }
            }
        
        return ans;
    }
};