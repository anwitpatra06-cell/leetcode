class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int n=candies.size();
        int maximum=INT_MIN;
        for(int i=0;i<n;i++){
             maximum=max(maximum,candies[i]);
        }
        for(int i=0;i<n;i++){
            if((candies[i] + extraCandies)>=maximum){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};