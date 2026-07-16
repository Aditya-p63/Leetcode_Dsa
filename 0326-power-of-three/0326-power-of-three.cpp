#include <cmath>
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        
        for(int i = 0; i < 20; i++) { // 3^19 is < INT_MAX
            if(pow(3, i) == n)
                return true;
        }
        return false;
    }
};
