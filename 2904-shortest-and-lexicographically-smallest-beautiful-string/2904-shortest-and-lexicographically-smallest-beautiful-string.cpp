class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int len,blen=INT_MAX;
        int n=s.size();
        int one=0;
        int l=0;
        string ans="";
        for(int r=0;r<n;r++){
            if(s[r]=='1'){
                one++;
            }
            if(one==k){
                while(l<=r && s[l]=='0'){
                    l++;
                }
                len=r-l+1;
                string curr=s.substr(l,len);
                if(len<blen){
                    blen =len ;
                    ans=curr;
                }
              else if (len == blen && curr < ans) {
                    ans = curr;
                }
                if(s[l]=='1'){
                    one--;
                    l++;
                }

            }
        }
        return ans;
    }
};