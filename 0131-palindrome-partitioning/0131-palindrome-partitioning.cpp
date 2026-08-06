class Solution {
public:
bool ispal(string s){
    string s2=s;
    reverse(s2.begin(),s2.end());
    return(s2==s);
}
void getallparts(string s,vector<string>& partition,vector<vector<string>>& ans){
    if(s.size()==0){
        ans.push_back(partition);
        return;
    }
    for(int i=0;i<s.size();i++){
        string strpart=s.substr(0,i+1);
        if(ispal(strpart)){
            partition.push_back(strpart);
            getallparts(s.substr(i+1),partition,ans);
            partition.pop_back();

        }

    }
}
    vector<vector<string>> partition(string s) {
        vector<string>partition;
        vector<vector<string>>ans;
        getallparts(s,partition,ans);
        return ans;

    }
};