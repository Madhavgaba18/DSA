// burte force approach - O(n) - but this will show time limit exceeded for large inputs
class Solution
{
public:
    double myPow(double x, long n)
    {
        double ans = 1;
        if (x == 1)
            return 1;

        if (n < 0)
        {
            x = 1 / x;
            n = -n;
        }

        for (double i = 0; i < n; i++)
        {
            ans = ans * x;
        }

        return ans;
    }
};

// optimized way - O(log n)
class Solution
{
public:
    double myPow(double x, long n)
    {
        if (x == 1)
            return 1;

        double ans = 1;
        if (n < 0)
        {
            x = 1 / x;
            n = -n;
        }
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                ans *= x;
            }
            x = x * x;
            n = n / 2;
        }
        return ans;
    }
};