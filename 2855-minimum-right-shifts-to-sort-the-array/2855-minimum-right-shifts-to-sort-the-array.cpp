class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n=nums.size();
        int c=0,a;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                c++;
            }
        }
        if(n==1){
            return 0;
        }
        if(c!=1){
            return -1;
        }
        else{
        a = (n - (min_element(nums.begin(), nums.end()) - nums.begin())) % n;
        }
        return a;
    }
};