class Solution {
public:
bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}
    long long splitArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>a;
        vector<int>b;long long suma=0,sumb=0;
        for(int i=0;i<n;i++){
            if(isPrime(i)){
                a.push_back(nums[i]);
            }
            else{
              b.push_back(nums[i]);
            }
        }
        for(int i=0;i<a.size();i++){
            suma+=a[i];
        }
        for(int i=0;i<b.size();i++){
            sumb+=b[i];
        }
        return abs(suma-sumb);
    }
};