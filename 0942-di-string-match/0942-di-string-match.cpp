class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        int a=n,b=0;;
        vector<int>ans;
        for(int i=0;i<=n;i++){
            if(s[i]=='I'){
                ans.push_back(b);
                b++;
            }
            else{
                ans.push_back(a);
                a--;
            }
        }
        return ans;
    }
};