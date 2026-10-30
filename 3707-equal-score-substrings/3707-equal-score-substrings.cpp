class Solution {
public:
    bool scoreBalance(string s) {
        int total=0,sum=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            total+=s[i]-'a'+1;
        }
        if(total%2!=0){
            return false;
        }
        for(int i=0;i<n;i++){
            sum+=s[i]-'a'+1;
            if(sum==total/2){
                return true;
            }
        }
        return false;
    }
};