class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum=0,suum=0;
        for(int i=1;i<=n;i++){
            if(i%m!=0){
                sum+=i;
            }
        }
          for(int i=1;i<=n;i++){
            if(i%m==0){
                suum+=i;
            }
        }
        return sum-suum;
    }
};