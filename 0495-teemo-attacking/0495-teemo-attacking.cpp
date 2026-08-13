class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans=0;
        for(int i=0;i<timeSeries.size()-1;i++){
           int gap=timeSeries[i+1]-timeSeries[i];
           ans+=min(gap,duration);
        }
        ans+=duration;
        return ans;
    }
};