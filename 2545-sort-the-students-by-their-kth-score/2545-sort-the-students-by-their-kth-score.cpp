class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size();
        for (int i = 0; i < n; i++) {
            int mx = i;
            for (int j = i + 1; j < n; j++) {
                if (score[j][k] > score[mx][k])
                    mx = j;
            }
            swap(score[i], score[mx]);
        }
        return score;
    }
};
