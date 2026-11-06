
class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {
        int n=p1.size();
        int m=p2.size();

        int sum=0,tsum=0;

        for(int i=0;i<n;i++){
            if((i>=1 && p1[i-1]==10) || (i>=2 && p1[i-2]==10)){
                sum+=2*p1[i];
            }
            else{
                sum+=p1[i];
            }
        }

        for(int i=0;i<m;i++){
            if((i>=1 && p2[i-1]==10) || (i>=2 && p2[i-2]==10)){
                tsum+=2*p2[i];
            }
            else{
                tsum+=p2[i];
            }
        }

        if(sum>tsum) return 1;
        else if(tsum>sum) return 2;
        else return 0;
    }
};
