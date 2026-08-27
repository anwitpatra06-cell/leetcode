class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>>ans{};
        vector<int>temp;
        sort(nums.begin(),nums.end());
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(int i=lower;i<=upper;i++){
            if(s.find(i)==s.end()){
                temp.push_back(i);
            }
        }
          if(temp.empty()) {
            return ans;
        }
        int st=temp[0];int end=temp[0];
        for(int i=1;i<temp.size();i++){
            // int st=i;int end=i;
            if(temp[i]==end+1){
                end++;
            }
            else{
                ans.push_back({st,end});
                st=temp[i];
                end=temp[i];
            }
        }
        ans.push_back({st, end});
        return ans;
      
    }
};