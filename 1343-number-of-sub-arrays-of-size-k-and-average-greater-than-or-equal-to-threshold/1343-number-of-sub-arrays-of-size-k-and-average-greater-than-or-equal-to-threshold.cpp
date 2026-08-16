class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int j = 0, sum = 0, count = 0;
        int n = arr.size();
        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }
        if (sum >= k * threshold) {
            count++;
        }
        for (int i = k; i < n; i++) {
            sum += arr[i] - arr[j];
            j++;
            if (sum >= k * threshold) {
                count++;
            }
        }
        return count;
    }
};