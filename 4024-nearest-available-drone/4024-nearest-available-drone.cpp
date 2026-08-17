class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans=-1;
        int m=drones.size();
        int minsum=INT_MAX;
        for(int i=0;i<m;i++){
            int sum=0;
            sum=abs(target[0]-drones[i][0]);
            sum+=abs(target[1]-drones[i][1]);
            if(drones[i][2]>=sum){
                if(sum<minsum){
                    minsum=sum;
                    ans=i;
                }
            }
        }

        return ans;
    }
};