class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) return -1;  

        int largest = -1;
        int secondLargest = -1;

        for (int num : arr) {
            if (num > largest) {
                secondLargest = largest;
                largest = num;
            }
            else if (num > secondLargest && num < largest) {
                secondLargest = num;
            }
        }

        return secondLargest;
    }
};
