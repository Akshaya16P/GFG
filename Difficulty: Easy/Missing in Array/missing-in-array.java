import java.util.Arrays;
class Solution {
    int missingNum(int arr[]) {
        // code here


        long n =arr.length+1;
        long  sum = n*(n+1)/2;
        long arraysum =0;
       for(int i= 0; i<n-1; i++){
        arraysum += arr[i];   
       }
        
        return (int) ( sum - arraysum);
    }
}

 