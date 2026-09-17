class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int ans=0;
        int left=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end()){
                left = max(left, mp[s[i]] + 1);
            }
            mp[s[i]]=i;
            ans=max(ans,i-left+1);

        }
        return ans;
    }
};