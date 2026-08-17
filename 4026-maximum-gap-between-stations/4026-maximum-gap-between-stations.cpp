class Solution {
public:
    int maximumGap(string skill, string station) {
        int j = 0;
        vector<int>left;
        vector<int>right;
        int maxgap=0;
        for (int i = 0; i < skill.size(); i++) {
            while (skill[i] != station[j]) {
                j++;
            }
            left.push_back(j);
            j++;
        }
        int m=station.size()-1;
        for (int i = skill.size()-1; i >=0; i--) {
            while (skill[i] != station[m]) {
                m--;
            }
            right.push_back(m);
            m--;
        }
        reverse(right.begin(),right.end());
        for(int i=0;i<skill.size()-1;i++){
            int gap=right[i+1]-left[i];
            maxgap=max(maxgap,gap);
        }
        return maxgap;
    }
};