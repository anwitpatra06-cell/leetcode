class Solution {
public:
    bool judgeCircle(string moves) {
        // int sum=0;
        // for(int i=0;i<moves.size();i++){
        //     if(moves[i]=='L' ||moves[i]=='D' ){
        //         sum+=-1;
        //     }
        //     else{
        //         sum+=1;
        //     }
        // }
        // if(sum==0){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        int l = 0, r = 0, u = 0, d = 0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'L') {
                l++;
            } else if (moves[i] == 'R') {
                r++;
            } else if (moves[i] == 'D') {
                d++;
            } else if (moves[i] == 'U') {
                u++;
            }
        }
        if (l == r && u == d) {
            return true;
        } else
            return false;
    }
};