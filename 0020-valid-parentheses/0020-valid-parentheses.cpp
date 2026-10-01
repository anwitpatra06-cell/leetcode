class Solution {
public:
    bool isValid(string s) {
        string t;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                t.push_back(s[i]);
            }
            else{
                if(t.empty()){
                    return false;
                }
                if(s[i]==')'&&t.back()!='('){
                    return false;
                }
                else if(s[i]=='}'&&t.back()!='{'){
                    return false;
                }
                else if(s[i]==']'&&t.back()!='['){
                    return false;
                }
                t.pop_back();
            }

        }
         return t.empty();
    }
};