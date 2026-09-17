class Solution {
public:
    int divide(int dividend, int divisor) {
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        long long ans = 0;

        while(a >= b){
            int count = 0;
            while(a >= (b << (count+1)))  count++;

            ans += 1LL<<count;

            a -= b<<count;
        }

        if(sign == -1)  ans = -ans;

        if(ans > INT_MAX)   return INT_MAX;
        if(ans < INT_MIN)   return INT_MIN;

        return (int)ans;
    }   
};