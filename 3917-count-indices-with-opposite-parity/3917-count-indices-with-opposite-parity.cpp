class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int ctr; vector<int> res;
        for(int i=0; i<nums.size(); i++){
            ctr=0;
            for(int j=i+1; j<nums.size(); j++){
                if((nums[i]%2==1 && nums[j]%2==0)||(nums[i]%2==0 && nums[j]%2==1))
                ctr++;
            }
            res.push_back(ctr);
        }
        return res;
    }
};