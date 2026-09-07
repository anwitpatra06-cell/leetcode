class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0 ||k%5==0){
            return -1;
        }
        int m=0,c=0;
      while(true){
        m=(10*m+1)%k;
        c++;
        if(m==0){
            return c;
            break;
        }
       
      }
    }
};