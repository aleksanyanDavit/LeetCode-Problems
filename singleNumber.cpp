#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            res = res ^ nums[i];
        }
        return res;
    }
};

int main() {
    Solution sol;
    
    int arr[] = {4, 1, 2, 1, 2};
    vector<int> nums(arr, arr + sizeof(arr)/sizeof(arr[0]));

    int result = sol.singleNumber(nums);

    cout << "The single number is: " << result << endl;

    return 0;
}

