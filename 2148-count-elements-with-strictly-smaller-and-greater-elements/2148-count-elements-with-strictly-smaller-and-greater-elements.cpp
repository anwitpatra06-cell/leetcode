class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int c=0;
        int mn=nums[0];

        int mx=nums[n-1];
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=mn && nums[i]!=mx){
                c++;
            }
        }
        return c;

    }
};