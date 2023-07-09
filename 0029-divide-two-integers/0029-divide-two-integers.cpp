class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor==1)
            return dividend;
        if (divisor == 0) {
            return 0;
        }
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        int quotient = 0;
        bool negative = (dividend < 0) != (divisor < 0);
        long longDividend = abs((long) dividend);
        long longDivisor = abs((long) divisor);
        while (longDividend >= longDivisor) {
            int shift = 0;
            while (longDividend >= (longDivisor << shift)) {
                shift++;
            }
            shift--;
            longDividend -= longDivisor << shift;
            quotient += 1 << shift;
        }
        return negative ? -quotient : quotient;
    }
};