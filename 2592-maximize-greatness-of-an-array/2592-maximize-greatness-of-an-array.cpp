class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        int j=0;
        for(int i=j;i<nums.size();i++){
            if(nums[i]>nums[j]){
                j++;
                cnt++;
            }
        }
      return cnt;
    }
};