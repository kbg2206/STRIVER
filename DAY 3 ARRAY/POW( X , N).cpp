class Solution {
public:
    double power(double x,int n)
    {
        double c,a;
        if(n==0) return 1;
        if(n<0)
        {
            a=power(x,n/2);
            if(abs(n)&1) c=a*a*(1/x);
            else c=a*a;
            return c;
        }
        else
        {
            a=power(x,n/2);
            if(abs(n)&1) c=a*a*x;
            else c=a*a;
            return c;
        }
    }
    double myPow(double x, int n) {
        long double ans=power(x,n);
        return ans;
    }
};