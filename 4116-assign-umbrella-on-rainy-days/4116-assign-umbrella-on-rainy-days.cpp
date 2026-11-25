
class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string> ans;
        int a = 0, b = 0;
        int n = rain.size();

        for (int i = 0; i < n; i++) {

            if (rain[i] == 0) {
                ans.push_back("None");
            }
            else if (i == n - 1 || rain[i + 1] == 0) {
                ans.push_back("Bob");
                b++;
            }
            else {
                if (a <= b) {
                    ans.push_back("Alice");
                    a++;
                }
                else {
                    ans.push_back("Bob");
                    b++;
                }
            }
        }

        return ans;
    }
};
