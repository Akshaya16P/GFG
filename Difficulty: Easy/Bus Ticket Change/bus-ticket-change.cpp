class Solution {
  public:
    bool canServe(vector<int> &arr) {
        // code here
        int n = arr.size();
        unordered_map<int,int> mp;
        
        for(int i = 0 ; i< n ; i++){
            if(arr[i] == 5){
                mp[5]++;
            }else if(arr[i] == 10){
                if(mp[5] <= 0) return false;
                else{
                    mp[5]--;
                    mp[10]++;
                }
            }else{
                // arr[i] = 20
                if(mp[5] >= 1){
                    
                    if(mp[10] >= 1){
                        mp[5]--;
                        mp[10]--;
                        mp[20]++;
                    }else{
                        if(mp[5] < 3) return false;
                        else{
                            mp[5]-= 3;
                        }
                    }
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};

