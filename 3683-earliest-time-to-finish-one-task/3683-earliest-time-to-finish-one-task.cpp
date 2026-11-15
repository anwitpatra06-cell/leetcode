class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int a=INT_MAX;
        int sum=0,n=tasks.size();
        for(int i=0;i<n;i++){
            sum=tasks[i][0]+tasks[i][1];
            a=min(a,sum);
        }
        return a;
    }
};