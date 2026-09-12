class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>ps(n);
        vector<int>ss(n);
        int ans=-1;
        ps[0]=0;
        ss[n-1]=0;
        for(int i=1;i<n;i++){
            ps[i]=ps[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            ss[i]=ss[i+1]+nums[i+1];
        }
        for(int i=0;i<n;i++){
            if(ps[i]==ss[i]){
                ans=i;
                break;
            }
        }
        return ans;
    }
};