class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int zeo=0,one=0;
            for(int j=i;j<n;j++){
                if(s[j]=='1'){
                    one++;
                }
                else{
                    zeo++;
                }
                if(one<=k || zeo<=k){
                    ans++;
                }
            }
        }
        return ans;
    }
};