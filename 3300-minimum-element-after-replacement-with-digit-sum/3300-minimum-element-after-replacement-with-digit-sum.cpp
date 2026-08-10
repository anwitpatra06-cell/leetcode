class Solution {
public:
int dsum(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
    int minElement(vector<int>& nums) {
        vector<int>d;
        for(int i :nums){
            d.push_back(dsum(i));
        }
        sort(d.begin(),d.end());
        return d[0];
    }
};