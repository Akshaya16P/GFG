class Solution {
public:
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int i = 0;

        while (i < n) {
            if (arr[i] == x) {
                return i; 
            }
            int step = max(1, abs(arr[i] - x) / k);
            i += step;
        }

        return -1;  
    }
};
