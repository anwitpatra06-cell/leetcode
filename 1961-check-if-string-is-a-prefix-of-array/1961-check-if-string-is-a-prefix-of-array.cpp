class Solution {
public:
    bool isPrefixString(string sm, vector<string>& words) {
        set<string>s;
        int n=words.size();
        string si={};
      
        for(int i=0;i<n;i++){
            si+=words[i];
            s.insert(si);
        }
        if(s.find(sm)!=s.end()){
            return true;
        }
        else{
            return false;
        }
    }
};