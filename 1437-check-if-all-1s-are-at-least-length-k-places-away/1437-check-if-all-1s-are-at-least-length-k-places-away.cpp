class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>a;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                a.push_back(i);
            }
        }
        if(a.empty()){
            return true;
        }
        for(int i=0;i<a.size()-1;i++){
            if(a[i+1]-a[i]<k+1){
                return false;
            }
        }
        return true;
    }
};