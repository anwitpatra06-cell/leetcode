class Solution {
public:
    bool checkIfPangram(string s) {
        vector<bool>freq(26,false);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']=true;
        }
        for(bool b :freq){
            if(b==false){
            return false;
            }
        }
        return true;
    }
};