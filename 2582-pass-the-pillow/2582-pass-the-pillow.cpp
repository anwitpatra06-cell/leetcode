class Solution {
public:
    int passThePillow(int n, int time) {
        if(time>=n){
            int b=time/(n-1);
            if(b%2!=0){
                return n-(time%(n-1));
            }
            else{
                return time%(n-1)  +1;
            }
        }
        else{
            return time+1;

        }
    }
};