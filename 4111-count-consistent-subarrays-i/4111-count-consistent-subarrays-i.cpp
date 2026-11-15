class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int ans=0,n=nums.size();
        for(int i=0;i<n;i++){
            int a=INT_MAX,b=INT_MAX;
            for(int j=i;j<n;j++){
                a=min(a,nums[j]);
                b=b&nums[j];
                if(b==a){
                    ans++;
                }
            }
        }
        return ans;
    }
};