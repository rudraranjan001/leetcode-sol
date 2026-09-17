class Solution {
  public:
    int divide(int a, int b) {
        // code here
        int sign = ((a < 0) ^ (b < 0)) ? -1 : 1;
        
        long long dividend = abs((long long)a);
        long long divisor = abs((long long)b);
        
        long long  ans = 0;
        while(dividend >= divisor){
            long long count = 0;
            while(dividend >= (divisor <<(count+1))) count++;
            ans += 1LL<<count;
            dividend -= divisor<<count;
        }
        
        ans = ans * sign;
        
        if(ans > INT_MAX)   return INT_MAX;
        if(ans < INT_MIN)   return INT_MIN;
        
        return (int)ans;
    }
};