class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int a=0,ans=0;
        for(int i=0;i<n;i++){
            a+=gain[i];
            ans=max(ans,a);
        }
        return ans;
    }
};