class Solution {
public:
    void sei(vector<bool>& a) {
        int n = a.size() - 1;
        for (int i = 2; i < n; i++) {
            for (int j = i * 2; j <= n; j += i) {
                a[j] = 0;
            }
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        int n = nums.size();
        int mx = -1;
        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
        }
        // 1 means prime
        vector<bool> seive(mx + 1, 1);
        if (mx+1 > 0) {
            seive[0] = 0;
        }
        if (mx+1 > 1)
            seive[1] = 0;
        sei(seive);
        vector<int> prime;
        for (int i = 2; i <= mx; i++) {
            if (seive[i] == 1)
                prime.push_back(i);
        }
        vector<bool> taken(prime.size(), 0);
        for (int i = 0; i < nums.size(); i++) {
            int ele = nums[i];
            for (int j = 0; j< prime.size(); j++) {
                if (prime[j] > ele)
                    break;
                if (ele % prime[j] == 0) {
                    taken[j] = 1;
                }
            }
        }
            int count = 0;
            for (int i = 0; i < taken.size(); i++) {
                if (taken[i] == 1)
                    count++;
            }
        
        return count;
    }
        
    };