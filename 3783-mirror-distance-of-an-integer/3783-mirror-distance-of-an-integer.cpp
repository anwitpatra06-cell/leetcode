class Solution {
public:
    int mirrorDistance(int n) {
        int b=n;
        int rev=0;
         while(b!=0){
            rev=rev*10+b%10;
            b=b/10;
         }
         return(abs(rev-n));
    }
};