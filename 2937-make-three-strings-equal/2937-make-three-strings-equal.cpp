class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int a=s1.size();
        int x=s2.size();
        int y=s3.size();
        int c=0;
        int n=min(a,min(x,y));
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i] &&s2[i]==s3[i]){
                c++;
            }
            else{
                break;
            }
        }
        if(c==0){
            return -1;
        }
        return a-c+x-c+y-c;
    }
};