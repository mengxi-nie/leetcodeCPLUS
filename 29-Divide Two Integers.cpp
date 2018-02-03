class Solution {
public:
    int divide(int dividend, int divisor) {
        unsigned int divd = dividend, divs = divisor;
        if(divisor < 0)divs = -divs;
        if(dividend < 0)divd = -divd;
         
        unsigned int res = 0;
        while(divd >= divs)
        {
            long long a = divs;
            int i;
            for(i = 1; a <= divd; i++)
                a <<= 1;
            res += (1 << (i-2));
            divd -= (divs << (i-2));
        }
         
        return (dividend>0 ^ divisor>0) ? -res : (res >= INT_MAX ? INT_MAX : res);
    }
};
