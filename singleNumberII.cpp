class Solution {
public:
    int singleNumber(vector<int>& nums) {
        double preres = 0;
        double preres2 = 0;
        for(int i = 0; i < nums.size(); i++){
            preres += nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            preres2 += nums[i];
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    nums[j] = 0;
                }
            }
        }
        int res = (preres2 * 3 - preres) / 2;
        

        return res;
    }
};
