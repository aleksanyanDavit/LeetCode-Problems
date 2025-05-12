class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> twoSum = {-1, -1};
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(target == nums[i] + nums[j]){
                    twoSum[0] = i;
                    twoSum[1] = j;
                }
            }
        }
        return twoSum;
    }
};
