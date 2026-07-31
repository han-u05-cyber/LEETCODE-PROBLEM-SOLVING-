class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low = 0 ; int high = 0 ; int res = INT_MIN ;
        int cnt0 = 0;
        while(high < nums.size()){
            if(nums[high] == 0) cnt0++;
            while(cnt0 > k){
                if(nums[low] == 0){
                    cnt0--;
                }
                low++;
            }
            res = max(res , high - low + 1);
            high++;
        }
        return res;
    }
};