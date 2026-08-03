class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char ,  int> need;
        unordered_map<char , int> window;
        if(s.size()  < t.size()){
            return "";
        }
        int left = 0 , right = 0 , formed = 0; 
        int min_len = INT_MAX;
        int start = 0;
        for(int i = 0 ; i < t.size() ; i++){
            need[t[i]]++;
        }
        int required = need.size();
        while(right <s.size()){
            char ch = s[right];
            window[ch]++;
            if(need.count(ch) && window[ch] == need[ch]){
                formed++;
            }
            while(formed == required){
                //update the min_len
                if(right-left+1 < min_len){
                    min_len =min(min_len , right - left +1);
                    start = left;
                }
                
                char remove = s[left];
                window[remove]--;
                if(need.count(remove) && window[remove] < need[remove]){
                    formed--;
                }
                left++;
            }
            right++;
        }
        if(min_len == INT_MAX) return "";
        return s.substr(start , min_len);
    }
};