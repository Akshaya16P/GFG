class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int ans= 0;
        int length=b.length();
        int n=length;
        for(int i=0;i<length;i++){
            if(b[i]=='1'){
                ans= ans+pow(2,n-1);
            }
            n--;
        }
        return ans;
    }
};