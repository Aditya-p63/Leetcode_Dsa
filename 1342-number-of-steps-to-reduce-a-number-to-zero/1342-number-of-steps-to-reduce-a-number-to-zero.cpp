class Solution {
public:
    int numberOfSteps(int num) {
        if (num == 0) return 0;
        return __builtin_popcount(num) + (31 - __builtin_clz(num)) - 0;
    }
};
