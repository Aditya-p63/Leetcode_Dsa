class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());
        int suf[n];
        suf[n - 1] = satisfaction[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suf[i] = suf[i + 1] + satisfaction[i];
        }
        long long x = 0;
        long long v = 1;
        for (int i = 0; i < n; i++) {
            if(suf[i] > 0) {
                x += (v * satisfaction[i]);
                v++;
            }
        }
        return x;
    }
};