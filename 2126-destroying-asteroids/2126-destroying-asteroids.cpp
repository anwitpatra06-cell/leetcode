class Solution {
public:
    bool asteroidsDestroyed(int m, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long count=0;
        long long mass=m;
        for(int i=0;i<asteroids.size();i++){
            if(mass>=asteroids[i]){
                count++;
            }
            mass+=asteroids[i];
        }
        if(count==asteroids.size()){
            return true;
        }
        else {
            return false;
    }
    }
};