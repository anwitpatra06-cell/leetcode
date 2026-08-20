class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ps(n);
        ps[0]=nums[0];
        for(int i=1;i<n;i++){
            ps[i]=ps[i-1]+nums[i];
        }
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int rem=ps[i]%k;
            mp[0]=-1;
            if(mp.find(rem)!=mp.end()){
                if(i-mp[rem]>=2){
                       return true;
            }}
            else{
                mp[rem]=i;
            }
        }
        return false;

    }
};