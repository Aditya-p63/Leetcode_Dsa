class Solution {
public:
    double f(double x, long n) {
        if (x == 1)
            return x;
        if (n == 0)
            return 1;
        if (n % 2 == 0) {
            return f(x * x, n / 2);
        }
        return x * f(x, n - 1);
    }
    double myPow(double x, int n) {
        double n1 = n;
        if (n == INT_MIN) {
            return 1.0 / (x * f(x, -(n + 1)));
        }
        if (n1 < 0.0) {
            return (1.0 / f(x, -1 * n1));
        }
        return f(x, n1);
    }
};