class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& arr) {
        int n = arr.size(), m = arr[0].size();
        int ans = 0, idx = -1;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < m; j++) {
                count += arr[i][j];
            }
            if (count > ans) {
                ans = count;

                idx = i;
            }
            count = 0;
        }
        if(idx==-1) idx=0;
        return {idx,ans};
    }
};