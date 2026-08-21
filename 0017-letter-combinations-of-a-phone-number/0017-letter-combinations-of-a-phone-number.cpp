class Solution {
public:
 vector<string> ans;
    string digits;
void solve(int idx,string curr){
    if(idx==digits.size()){
        ans.push_back(curr);
        return;
    }
    vector<string>ans;
    vector<string> mp = {
    "",     // 0
    "",     // 1
    "abc",  // 2
    "def",  // 3
    "ghi",  // 4
    "jkl",  // 5
    "mno",  // 6
    "pqrs", // 7
    "tuv",  // 8
    "wxyz"  // 9
};
    string letter=mp[digits[idx]-'0'];
    for(int i=0;i<letter.size();i++){
        solve(idx+1,curr+letter[i]);
    }
    
}
    vector<string> letterCombinations(string digits) {
        this->digits=digits;
        if(digits.empty()){
            return {};
        }
        solve(0,"");
        return ans;
    }
};