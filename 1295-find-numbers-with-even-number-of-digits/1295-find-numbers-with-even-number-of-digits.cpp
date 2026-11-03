class Solution {
public:
bool n(int x){
    int cnt=0;
    while(x!=0){
        cnt++;
        x/=10;
    }
    if(cnt%2==0){
        return true;
    }
    else{
        return false;
    }
}
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(n(nums[i])){
                c++;
            }
        }
        return c;
    }
};