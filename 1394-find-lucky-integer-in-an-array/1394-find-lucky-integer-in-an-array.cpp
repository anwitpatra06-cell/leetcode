class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxans=-1;
        // int maxans=INT_MIN;
        unordered_map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        for(auto j:freq){
            if(j.first==j.second){
                maxans=max(maxans,j.first);
            }
        }
        return maxans;
    }
};