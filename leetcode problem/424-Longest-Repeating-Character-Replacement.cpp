class Solution {
public:
    int characterReplacement(string s, int k) {
       int low = 0;
       int high = 0;
       int res = INT_MIN;
       int max_count = 0;
       int f[256] = {0};
       while(high < s.size()){
            f[s[high]]++;
            max_count = max(max_count , f[s[high]]);
            if(((high - low +1) - max_count) > k){
                f[s[low]]--;
                max_count = max(max_count , f[s[low]]);
                low++;    
            }
            res = max(res , high - low +1);
            high++;
       } 
       return res;
    }
};