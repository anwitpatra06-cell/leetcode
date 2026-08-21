class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int> temp;

        while(n != 0){
            temp.push_back(n % 10);
            n /= 10;
        }

        reverse(temp.begin(), temp.end());

        // Find pivot from right
        int i = temp.size() - 2;

        while(i >= 0 && temp[i] >= temp[i + 1]){
            i--;
        }

        // No greater number possible
        if(i < 0)
            return -1;

        // Find smallest element greater than pivot
        int j = temp.size() - 1;

        while(temp[j] <= temp[i]){
            j--;
        }

        swap(temp[i], temp[j]);

        // Sort the part after pivot
        sort(temp.begin() + i + 1, temp.end());

        long long ans = 0;

        for(int x : temp){
            ans = ans * 10 + x;
        }

        if(ans > INT_MAX)
            return -1;

        return ans;
    }
};