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
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='L'){
        //         for(int j=0;j<3;j++){
        //             if(s[j]!='L'){
        //                 l=true;
        //             }
        //         }
        //     }
        // }
        // int j=0;
        // while(j<s.size()){
        //     if(s[j]=='L'){
        //         for(int i=j+1;i<=j+2;i++){
        //             if(s[i]!='L'){
        //                 l=true;
        //             }
        //         }
        //         j+=2;
        //     }
        //   j++;  
        // }

if (s.find("LLL") != string::npos){
    l=false;
}
        return  a&&l;
    }
};