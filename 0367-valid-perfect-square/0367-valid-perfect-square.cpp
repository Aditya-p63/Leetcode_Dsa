class Solution {
public:
    bool isPerfectSquare(int num) {
        long long  lo = 0 , hi = num;
        while(lo<=hi){
            long  mid = lo + (hi-lo)/2;
            if((mid*mid)==num) return true;
            else if((mid*mid)<num) lo = mid+1;
            else hi = mid-1;
        }
        return false;
    }
};