class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>s;
        int ans=0,left=0;
        for(int right=0;right<nums.size();right++){
            s[nums[right]]++;
            while(s[nums[right]]>k){
                s[nums[left]]--;
                left++;
                
            }
            ans=max(ans,(right-left+1));

        }
        return ans;
    }
};