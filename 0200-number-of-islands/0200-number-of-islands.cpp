class Solution {
public:
    void dfs(vector<vector<char>>& adj, int i, int j) {
        int n = adj.size(), m = adj[0].size();

        if (i < 0 || i >= n || j < 0 || j >= m || adj[i][j] == '0') {
            return;
        }
        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};
        adj[i][j] = '0';
        for (int k = 0; k < 4; k++) {
            int drow = i + dx[k];
            int dcol = j + dy[k];
            dfs(adj, drow, dcol);
        }
    }
    int numIslands(vector<vector<char>>& adj) {
        int n = adj.size(), m = adj[0].size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (adj[i][j] == '1') {
                    count++;
                    dfs(adj, i, j);
                }
            }
        }
        return count;
    }
};