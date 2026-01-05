class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        
        // Calculate sum of first window of size k
        long long windowSum = 0;
        for (int i = 0; i < k; i++) {
            windowSum += arr[i];
        }
        
        long long maxSum = windowSum;
        
        // Slide the window
        for (int i = k; i < n; i++) {
            windowSum += arr[i];        // add next element
            windowSum -= arr[i - k];    // remove element going out
            maxSum = max(maxSum, windowSum);
        }
        
        return maxSum;
    }
};
