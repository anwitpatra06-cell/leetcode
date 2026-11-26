class Solution {
public:
    bool canAliceWin(int n) {
        int c=0;
        if(n<10){
            return false;
        }
        else{
            int i=0;
            while(true){
                n=n-(10-i);
               if(n>=0){
                    c++;
                }
                else{
                    break;
                }
                i++;
            }
        }
        if(c%2==0){
            return false;
        }
        else{
            return true;
        }
    }
};