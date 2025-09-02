// Brute Force Approach
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            int currSum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                currSum = currSum + nums[j];
                sum = max(sum, currSum);
            }
        }
        return sum;
    }
};

// Kadane's Algorithm
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int currSum = 0, maxSum = INT_MIN;
        for (int val : nums)
        {
            currSum += val;
            maxSum = max(currSum, maxSum);
            if (currSum < 0)
            {
                currSum = 0;
            }
        }
        return maxSum;
    }
};