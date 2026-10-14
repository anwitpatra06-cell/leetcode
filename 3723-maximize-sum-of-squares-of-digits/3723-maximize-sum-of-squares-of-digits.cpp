class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>num*9){
            return "";
        }
        string s="";
        while(sum>9){
            s+='9';
            sum-=9;
            num--;          
        }
        if(sum>0){
            s+=char('0'+sum);
            num--;
        }
        while(num>0){
            s+='0';
            num--;
        }
        return s;
    }
};