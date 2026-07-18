class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> st;
        for(int i = 0 ; i < n-1 ; i++){
            set<int> hashset;
            for(int j = i+1 ; j < n ; j++){
                int target = -nums[i] - nums[j] ;
                if(hashset.find(target) != hashset.end()){
                    vector<int> temp = {target , nums[i] , nums[j]};
                    sort(temp.begin() , temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
        vector<vector<int>> arr(st.begin() , st.end());
        return arr;
    }
};