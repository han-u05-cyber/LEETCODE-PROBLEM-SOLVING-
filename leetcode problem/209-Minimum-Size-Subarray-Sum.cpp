class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = INT_MAX;
        int left = 0 , right = 0;
        int sum = nums[0] ;
        while(right < nums.size()){
            while(left <= right && sum > target){
                len = min(len , right - left + 1);
                sum -= nums[left];
                left++;                
            }
            if(sum == target){
                len = min(len , right - left +1);
            }
            right++;
            if(right < nums.size())  sum += nums[right] ;
        }
        if(len  == INT_MAX){
            return 0 ;
        }
        return len ;
    }
};