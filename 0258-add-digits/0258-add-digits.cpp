class Solution {
public:
int no(int x) {
    if (x == 0)
        return 1;

    int c = 0;
    while (x != 0) {
        x /= 10;
        c++;
    }
    return c;
}
    int addDigits(int num) {
        int sum=0;
        while(no(num)!=1){
            sum=0;
            while(num!=0){
            sum+=num%10;
            num/=10;
        }
        num=sum;
     }
     return num;
    }
};