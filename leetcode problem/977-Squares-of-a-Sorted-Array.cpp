class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0 , j = nums.size()-1 ; 
        vector<int> nums2(nums.size());
        int k = nums.size() - 1;
        while(i <= j){
            int n = nums[i]*nums[i];
            int m = nums[j]*nums[j];
            if(n <= m){
                nums2[k] = m;
                j--;
            }
            else{
                nums2[k] = n;
                i++;
            }
            k--;
        }
        return nums2;
    }
};