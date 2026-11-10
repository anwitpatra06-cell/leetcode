class Solution {
public:
    bool digitCount(string nums) {
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]-'0']++;
        }
        bool b=true;
        for(int i=0;i<n;i++){
            if(m[i]!=nums[i]-'0'){
                b=false;
                break;
            }
        }
        return b;
    }
};