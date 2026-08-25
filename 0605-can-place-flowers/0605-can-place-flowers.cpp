class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
         
        if (n == 0)
            return true;

        if (flowerbed.size() == 1) {
            if (n == 1 && flowerbed[0] == 0)
                return true;
            return false;
        }

        int count=0;
        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            flowerbed[0] = 1;
            count++;
        }
        for(int i=1;i<flowerbed.size()-1;i++){
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                // flowerbed[i+1]=1;
                count++;
            }
        }
          int last = flowerbed.size() - 1;

        if (flowerbed[last] == 0 &&
            flowerbed[last - 1] == 0) {
            
            flowerbed[last] = 1;
            count++;
        }
        if(count<n){
            return false;
        }
        else return true;
    }
};