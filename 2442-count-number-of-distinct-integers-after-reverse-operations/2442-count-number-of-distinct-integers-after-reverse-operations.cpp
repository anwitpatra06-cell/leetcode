class Solution {
public:
int rev(int x){
    int rev=0;
    while(x!=0){
        rev=rev*10+x%10;
        x=x/10;
    }
    return rev;
}
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(rev(nums[i]));
        }
        set<int>s(nums.begin(),nums.end());
        return s.size();
        
    }
};