class Solution {
public:
int bit(int x){
    int c=0;
    while(x!=0){
        if(x%2==1){
            c++;
        }
        x/=2;
    }
    return c;
}
    int calculateScore(int a, int b) {
        int s1,s2;
        s1=bit(a);
        s2=bit(b);
        if(s1>=s2){
            return s1*s2;
        }
        else
        return s2/s1;
    }
};