class Solution {
public:
    bool checkRecord(string s) {
        int counta=0;
        bool a=false,l=true;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                counta++;
            }
        }
        if(counta<2){
            a=true;
        }


if (s.find("LLL") != string::npos){
    l=false;
}
        return  a&&l;
    }
};