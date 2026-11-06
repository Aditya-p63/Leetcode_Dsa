class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();

        queue<pair<pair<int, int>, int>> q;
        int count = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2)
                    q.push({{i, j}, 0});
                else if (grid[i][j] == 1)
                    count++;
            }
        }

        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};

        while (!q.empty()) {
            int x = q.front().first.first;
            int y = q.front().first.second;
            int t = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int cx = x + dx[i];
                int cy = y + dy[i];

                if (cx >= 0 && cx < n && cy >= 0 && cy < m &&
                    grid[cx][cy] == 1) {

                    grid[cx][cy] = 2;
                    q.push({{cx, cy}, t + 1});

                    count--;
                    ans = max(ans, t + 1);
                }
            }
        }

        if (count != 0)
            return -1;

        return ans;
    }
};