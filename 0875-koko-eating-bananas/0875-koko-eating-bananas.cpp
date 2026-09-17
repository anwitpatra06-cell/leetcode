class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int st=1,ans;
        int end=*max_element(piles.begin(),piles.end());
        while(st<=end){
            long long sum=0;
            int mid=(st+end)/2;
            for(int i=0;i<n;i++){
                sum+=(piles[i]+mid-1)/mid;
            }
            if(sum>h){
                st=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};