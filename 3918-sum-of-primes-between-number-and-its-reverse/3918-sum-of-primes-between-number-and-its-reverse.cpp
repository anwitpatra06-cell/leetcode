class Solution {
public:
    int rev(int x) {
        int r = 0;
        while (x != 0) {
            r =r*10+ x % 10;
            x /= 10;
        }
        return r;
    }
    bool isprime(int y) {
        if (y < 2) {
            return false;
        } else {
            for (int i = 2; i * i <= y; i++) {
                if (y % i == 0) {
                    return false;
                }
            }
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int a=min(n,rev(n));
        int b=max(n,rev(n));
        int sum=0;
        for(int i=a;i<=b;i++){
            if(isprime(i)){
                sum+=i;
            }
        }
        return sum;
    }
};