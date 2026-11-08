class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int count = 0;

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (grid[i][j] == 0) continue;

                queue<pair<int, int>> q;
                q.push({i, j});
                grid[i][j] = 0;

                int size = 0;

                while (!q.empty()) {
                    auto [x, y] = q.front();
                    q.pop();

                    size++;

                    // Check same row
                    for (int k = 0; k < m; k++) {
                        if (grid[x][k] == 1) {
                            q.push({x, k});
                            grid[x][k] = 0;
                        }
                    }

                    // Check same column
                    for (int k = 0; k < n; k++) {
                        if (grid[k][y] == 1) {
                            q.push({k, y});
                            grid[k][y] = 0;
                        }
                    }
                }

                if (size > 1) {
                    count += size;
                }
            }
        }

        return count;
    }
};