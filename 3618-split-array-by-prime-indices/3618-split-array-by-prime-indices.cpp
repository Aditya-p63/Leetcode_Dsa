class Solution {
public:
    bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
    long long splitArray(vector<int>& nums) {
        long long  n=nums.size();
        vector<int>a;
        vector<int>b;
      for (int i = 0; i < nums.size(); i++) {
        if (isPrime(i)) {
                b.push_back(nums[i]);
        }
        else {
            a.push_back(nums[i]);
        }
    }
        long long asum=0;
        long long bsum=0;
        for(int i=0;i<a.size();i++){
            asum+=a[i];
        }
        for(int i=0;i<b.size();i++){
            bsum+=b[i];
        }
        return abs(asum-bsum);
    }
};