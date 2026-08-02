class Solution {
public:
    bool isThree(int n) {
        long long y=n;
        long long count=0;
        for(long long i=1;i<=y;i++){
            if(y%i==0) count++;
        }
        if(count==3) return true;
        return false;

    }
};