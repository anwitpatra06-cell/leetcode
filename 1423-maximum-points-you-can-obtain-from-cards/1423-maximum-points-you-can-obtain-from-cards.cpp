class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int n=c.size();
        int m=n-k;
        int sum=0,osum=0;
        int tsum;
        for(int i=0;i<n;i++){
            sum+=c[i];
        }
        for(int i=0;i<m;i++){
            osum+=c[i];
        }
        tsum=osum;
        int l=0,r=m;
        while(r<=n-1){
        osum+=c[r]-c[l];
        tsum=min(tsum,osum);
        l++;
        r++;
        }
        return sum-tsum;
    }
};