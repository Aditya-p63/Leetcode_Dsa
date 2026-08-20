class Solution {
public:
    int waviness(long long x) {
        string s = to_string(x);

        if (s.size() < 3) return 0;

        int cnt = 0;

        for (int i = 1; i + 1 < s.size(); i++) {
            if ((s[i] > s[i - 1] && s[i] > s[i + 1]) ||
                (s[i] < s[i - 1] && s[i] < s[i + 1])) {
                cnt++;
            }
        }

        return cnt;
    }

    long long totalWaviness(long long num1, long long num2) {
        long long ans = 0;

        for (long long x = num1; x <= num2; x++) {
            ans += waviness(x);
        }

        return ans;
    }
};