class Solution {
public:
    string tobase(int num, int base) {
        string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string result = "";
        if (num == 0)
            return "0";
        while (num > 0) {
            result = digits[num % base] + result;
            num /= base;
        }
        return result;
    }

    string concatHex36(int n) {
        int sq=n*n;
        int cu=sq*n;
        string a=tobase(sq,16);
        string b=tobase(cu,36);
        return a+b;
    }
};