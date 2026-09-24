class Solution {
public:
    int countConsistentStrings(string a, vector<string>& words) {
        vector<bool>freq(26,false);
        for(int i=0;i<a.size();i++){
            freq[a[i]-'a']=true;
        }
        int n=words.size();
        for(int i=0;i<words.size();i++){
            for(char x :words[i]){
                if(freq[x-'a']==false){
                    n--;
                    break;
                }
            }
        }
        return n;
    }
};