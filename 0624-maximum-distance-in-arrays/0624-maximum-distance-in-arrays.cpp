class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int maxi1=INT_MIN;
        int mini1=INT_MAX;
         int maxi2=INT_MIN;
        int mini2=INT_MAX;
        int idx=-1;
        for(int i = 0; i < arrays.size(); i++){
            if(arrays[i].back()>maxi1){
                maxi1=arrays[i].back();
                idx=i;
            }
            
        }
        for(int i = 0; i < arrays.size(); i++){
            if(i==idx)  continue;
            mini1=min(arrays[i].front(),mini1);
        }
        int ans1=(maxi1-mini1);
        for(int i = 0; i < arrays.size(); i++){
            if(arrays[i].front()<mini2){
                mini2=arrays[i].front();
                idx=i;
            }
            
        }
        for(int i = 0; i < arrays.size(); i++){
            if(i==idx)  continue;
            maxi2=max(arrays[i].back(),maxi2);
        }

        int ans2=(maxi2-mini2);
        return max(ans1,ans2);
    }
};