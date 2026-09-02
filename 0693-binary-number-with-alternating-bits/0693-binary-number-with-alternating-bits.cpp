class Solution {
public:
    vector<int>binary(int n) {
        vector<int> b;
        while (n != 0) {
            b.push_back(n % 2);
            n = n / 2;
        }
        reverse(b.begin(), b.end());
        return b;
    }
    bool hasAlternatingBits(int n) {
        vector<int> num;
        bool ans=true;
        num = binary(n);
        for(int i=1;i<num.size();i++){
            if(num[i]==num[i-1]){
                ans= false;
                break;
            }
        }
        return ans;
    }
};