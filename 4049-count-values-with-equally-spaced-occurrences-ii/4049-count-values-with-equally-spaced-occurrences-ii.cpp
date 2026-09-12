class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int, vector<int>> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }

        int ans = 0;

        for (auto p : mp) {
            vector<int> pos = p.second;
             if (pos.size() < 3)
                continue;
            bool b=true;
            int diff=pos[1]-pos[0];
             for(int i=1;i<pos.size();i++){
                if (pos[i] - pos[i-1] !=diff) {
                    b=false;
                }

            }
                if(b){
                    ans++;
                }
        }

        return ans;
    }
};