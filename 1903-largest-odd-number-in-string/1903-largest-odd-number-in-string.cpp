class Solution {
public:
    string largestOddNumber(string s) {
        int j = s.size() - 1;
        while (j >= 0) {
            if (((s[j] - '0') % 2) == 1)
                return s.substr(0, j + 1);

            j--;
        }
        return "";
    }
};