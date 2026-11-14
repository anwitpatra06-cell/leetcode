class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n=nums.size();
        set<int>s;
        for(int i=0;i<n-1;i++){
            int sum=0;
            sum=nums[i]+nums[i+1];          
            if(s.find(sum)!=s.end()){
                return true;
            }
            s.insert(sum);
        }
        return false;
    }
};