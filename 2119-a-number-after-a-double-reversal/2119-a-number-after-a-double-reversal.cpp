class Solution {
public:
    bool isSameAfterReversals(int num) {
        string s = to_string(num);
        reverse(s.begin(),s.end());
        int a = stoi(s);
        string t = to_string(a);
        reverse(t.begin(),t.end());
        int r = stoi(t);
        return num==r;
    }
};