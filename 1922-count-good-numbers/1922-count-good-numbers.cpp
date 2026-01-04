class Solution {
public:
    static const long long MOD = 1000000007;
    long long fastPower(long long base, long long exp) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % MOD;
            }
            base = (base * base) % MOD;
            exp /= 2;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        long long evenPositions = (n + 1) / 2;
        long long oddPositions  = n / 2;

        long long evenWays = fastPower(5, evenPositions);
        long long oddWays  = fastPower(4, oddPositions);

        return (evenWays * oddWays) % MOD;
    }
};
