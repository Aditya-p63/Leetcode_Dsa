class Solution {
public:
    unordered_set<string> map;
    vector<int> memo;
    bool solve(string &s, int idx) {
        if (idx == s.size())
            return true;
        if (memo[idx] != -1)
            return memo[idx];
        string cur;
        for (int i = idx; i < s.size(); i++) {
            cur += s[i];
            if (map.count(cur)) {
                if (solve(s, i + 1))
                    return memo[idx] = true;
            }
        }
        return memo[idx] = false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        map = unordered_set<string>(wordDict.begin(), wordDict.end());
        memo.assign(s.size(), -1);

        return solve(s, 0);
    }
};