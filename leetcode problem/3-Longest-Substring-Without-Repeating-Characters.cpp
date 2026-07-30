class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0 ; 
        int high = 0 ;
        int res =0;
        unordered_map<char,int> mp;
        while(high < s.size()){
            mp[s[high]]++;
            while(mp[s[high]] > 1){
                mp[s[low]]--;
                if(mp[s[low] == 0]){
                    mp.erase(low);
                }
                low++;
            }
            
            res = max(res , high - low + 1);
            high++;
        }
        return res;
    }

};