class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> s;
        int mini = INT_MAX;

        for (int i = 0; i < list1.size(); i++) {
            for (int j = 0; j < list2.size(); j++) {

                if (list1[i] == list2[j]) {

                    int sum = i + j;

                    if (sum < mini) {
                        mini = sum;
                        s.clear();
                        s.push_back(list1[i]);
                    }
                    else if (sum == mini) {
                        s.push_back(list1[i]);
                    }
                }
            }
        }

        return s;
    }
};