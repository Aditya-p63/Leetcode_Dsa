class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, int> mp;
        long long actualSum = 0;
        int repeated = -1;

        for (auto &row : grid) {
            for (auto &x : row) {
                actualSum += x;
                mp[x]++;
                if (mp[x] == 2) repeated = x;
            }
        }

        long long total = n * n;
        long long expectedSum = total * (total + 1) / 2;

        int missing = expectedSum - (actualSum - repeated);

        return {repeated, missing};
    }
};
