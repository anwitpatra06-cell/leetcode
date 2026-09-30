
class Solution {
public:
    int maxSubarray(vector<int>& nums) {

        unordered_map<int, int> freq;

        int l = 0;
        int ans = 0;

        for (int r = 0; r < nums.size(); r++) {

            bool valid = true;

            // Check every value already in the window
            for (auto it : freq) {

                int a = it.first;

                // a + nums[r] = existing element
                if (freq.find(a + nums[r]) != freq.end()) {
                    valid = false;
                    break;
                }

                // a + b = nums[r]
                int b = nums[r] - a;

                if (freq.find(b) != freq.end()) {

                    // If a == b, need two different occurrences
                    if (a != b || freq[a] >= 2) {
                        valid = false;
                        break;
                    }
                }
            }

            // If invalid, shrink from left
            while (!valid) {

                freq[nums[l]]--;

                if (freq[nums[l]] == 0) {
                    freq.erase(nums[l]);
                }

                l++;

                // Check again with the new window
                valid = true;

                for (auto it : freq) {

                    int a = it.first;

                    if (freq.find(a + nums[r]) != freq.end()) {
                        valid = false;
                        break;
                    }

                    int b = nums[r] - a;

                    if (freq.find(b) != freq.end()) {
                        if (a != b || freq[a] >= 2) {
                            valid = false;
                            break;
                        }
                    }
                }
            }

            freq[nums[r]]++;

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};

