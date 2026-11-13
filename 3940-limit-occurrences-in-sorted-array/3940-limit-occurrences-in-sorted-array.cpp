class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
    int c=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]){
                c++;
            }
            else{
                c=1;
            }
            if(c>k){
                nums.erase(nums.begin() + i);
                i--;
                c--;
            }
        }
        return nums;
    }
};