class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int low = 0; 
        int high = nums.size() - 1;
        // to get the 1st wrong position from left array.
        while(low < nums.size()-1 && nums[low] <= nums[low+1]){
            low++;
        }
        if(low == nums.size()-1){
            return 0;
        }
        // to get the 1st wrong position from right side of array.
        while(high > 0 && nums[high] >= nums[high-1]){
            high--;
       }
        int mini = INT_MAX;
        int maxi = INT_MIN;
        // find the min and maximum element in that unsorted part of array.
        for(int i = low ; i <= high ; i++){
            mini = min(mini,nums[i]);
            maxi = max(maxi,nums[i]);
        }
        // expands towards left
        while(low > 0 && nums[low-1] > mini){
            low--;
        }
        //expands towards right
        while(high < nums.size()-1 && nums[high+1] < maxi){
            high++;
        }
        return high - low +1;
    }
};