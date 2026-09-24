class Solution {
public:
int dsum(int x){
    int sum=0;
    while(x!=0){
        sum+=x%10;
        x=x/10;
    }
    return sum;
}
    int smallestIndex(vector<int>& nums) {
        int ans=-1,n=nums.size();
        for(int i=0;i<n;i++){
            if(dsum(nums[i])==i){
                ans=i;
                break;
            }
        }
        return ans;
    }
};