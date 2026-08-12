class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_count = 0;
        int n = sentences.size();
        for (int i = 0; i < n; i++) {
            string s = sentences[i];
            stringstream ss(s);
            int count = 0;
            string word;
            while (ss >> word) {
                count++;
            }
            max_count = max(count,max_count);
        }
        return max_count;
    }
};