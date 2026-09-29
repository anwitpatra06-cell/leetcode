class Solution {
public:
    bool canTransform(vector<int>& s, vector<int>& t) {
        int n=s.size();
        int m=t.size();
        long long sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            sum1+=t[i];
            sum2+=s[i];
        }
        if(sum1!=sum2){
            return false;
        }
        else{
            return true;
        }
    }
};