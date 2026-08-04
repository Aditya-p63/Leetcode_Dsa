class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end()); 

        string t, r;
        t += s[0]; 
        t += s[2];
        r += s[1];
        r += s[3];

        num = stoi(t);
        int num2 = stoi(r);
        return num + num2;
    }
};
