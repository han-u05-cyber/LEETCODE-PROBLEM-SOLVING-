class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int> mpp ; 
        for(int i = 0 ; i < numbers.size() ; i++){
            int a = numbers[i];
            int x = target  - a;
            if(mpp.find(x) != mpp.end()){
                return {mpp[x]+1 , i+1};
            }
            mpp[a] = i;
        }
        return {};
    }
};