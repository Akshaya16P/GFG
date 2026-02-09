class Solution {
    public static boolean prime(int n) {
        // Write your code here
       int i=1;
       int count=0;
       while(i<=n){
           if(n%i==0)
               count++;
           i++;
           
       }
       if(count==2) return true;
       else return false;
        
    }
}