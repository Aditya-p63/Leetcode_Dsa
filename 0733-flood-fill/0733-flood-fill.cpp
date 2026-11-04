class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int n = image.size(), m = image[0].size();

        int ocolor = image[sr][sc];
        queue<pair<int, int>> q;
        q.push({sr, sc});
        image[sr][sc] = color;
        if (ocolor == color)
            return image;

        while (q.size() > 0) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            int dx[4] = {-1, 0, 1, 0};
            int dy[4] = {0, 1, 0, -1};
            for (int i = 0; i < 4; i++) {
                int drow = x + dx[i];
                int dcol = y + dy[i];
                if (drow >= 0 && drow < n && dcol >= 0 && dcol < m &&
                    image[drow][dcol] == ocolor) {
                    image[drow][dcol] = color;
                    q.push({drow, dcol});
                }
            }
        }
        return image;
    }
};