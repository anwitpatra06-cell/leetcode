class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int a=0,b=0,o=0,n=0,l=0;
        for(int i=0;i<text.size();i++){
            if(text[i]=='b'){
                b++;
            }
                        if(text[i]=='a'){
                a++;
            }            if(text[i]=='n'){
                n++;
            }            if(text[i]=='o'){
                o++;
            }            if(text[i]=='l'){
                l++;
            }
        }
        return min({a,b,n,o/2,l/2});
    }
};