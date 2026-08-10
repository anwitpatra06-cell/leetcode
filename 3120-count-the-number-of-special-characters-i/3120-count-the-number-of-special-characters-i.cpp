class Solution {
public:
    int numberOfSpecialChars(string word) {
        bool lc[26]={};
        bool uc[26]={};
        int ans=0;
        for(char c : word){
            if(c>='a'  && c<='z'){
                lc[c-'a']=true;
            }
            else{
                uc[c-'A']=true;
            }
        }
        for(int i=0;i<26;i++){
            if(lc[i] && uc[i]){
                ans++;
            }
        }
        return ans;
    }
};