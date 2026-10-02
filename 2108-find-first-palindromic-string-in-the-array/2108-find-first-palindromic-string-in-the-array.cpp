class Solution {
public:
bool ispal(string s){
    int n=s.size();
    bool b=true;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            b=false;
            break;
        }
    }
    return b;
}
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(ispal(words[i])){
                return words[i];
                break;
            }
        }
        return "";
    }
};