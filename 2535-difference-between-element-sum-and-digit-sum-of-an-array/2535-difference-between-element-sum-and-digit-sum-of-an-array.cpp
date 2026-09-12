class Solution {
public:
int dsum(int x){
    int ans=0;
    while(x!=0){
        ans+=x%10;
        x=x/10;
    }
    return ans;
}
    int differenceOfSum(vector<int>& nums) {
        int a=0,b=0,n=nums.size();
        for(int i=0;i<n;i++){
            a+=nums[i];
            b+=dsum(nums[i]);
        }
        return abs(a-b);
    }
};