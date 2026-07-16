class Solution {
public:
    double myPow(double x, int n) {
        return pow(x, (long long)n);
    }
private:
    double pow(double x, long long n) {
        if (n == 0) return 1.0;
        if (n < 0) return 1.0 / pow(x, -n);
        if (n % 2 == 1) {
            return x * pow(x * x, n / 2);
        }
        return pow(x * x, n / 2);
    }
};