#include<climits>
class Solution {
public:
    int reverse(int x) {
        int k = 0;
        int i = 1;

        if(x < 0){
            i = -1;
        }
        while(x != 0){
            if(k > INT_MAX / 10 || k < INT_MIN / 10){
            return 0;
        }
            k *= 10;
            k += (x % 10) * i;
            x = x / 10;
        }
        return k * i;
    }
};
