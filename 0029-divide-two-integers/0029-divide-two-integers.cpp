class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;
        long long result = 0;
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(dividend== INT_MIN && divisor == 1) return INT_MIN;
        bool is_negative = (dividend < 0) ^ (divisor< 0);
        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);
        while(n>= d){
            long long temp = d, multiple = 1;
            while((temp<< 1) <= n){
                temp <<= 1;
                multiple <<= 1;
            }
            n-= temp;
            result += multiple;
        }
        return is_negative ? -result: result;

    }
};