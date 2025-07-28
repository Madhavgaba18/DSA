// Brute Force Approach
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i <= n; i++)
        {
            bool found = false;
            for (int j = 0; j < n; j++)
            {
                if (nums[j] == i)
                {
                    found = true;
                    break;
                }
            }
            if (!found)
                return i;
        }
        return -1;
    }
};

// Optimized Approach using Sum Formula
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int totalSum = n * (n + 1) / 2;
        int actualSum = 0;
        for (int i = 0; i < n; i++)
        {
            actualSum += nums[i];
        }
        return totalSum - actualSum;
    }
};