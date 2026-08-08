class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum=0;
        long long i=1,x=0;
        while(n!=0){
            sum+=n%10;
            if(n%10!=0){
                x=x+(n%10)*i;
                i=i*10;
            }
            n/=10;
        }
        return sum*x;
        
    }
};