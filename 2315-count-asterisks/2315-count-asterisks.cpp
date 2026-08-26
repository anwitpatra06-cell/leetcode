class Solution {
public:
    int countAsterisks(string s) {
        int total=0;
        int count1=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int count=0;
            if(s[i]=='*'){
                count++;
            }
            if(s[i]=='|'){
                count1++;
            }
            if(count1%2==0){
                total+=count;

            }
        }
        return total;
    }
};