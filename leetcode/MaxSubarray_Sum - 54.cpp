// Brute Force Approach
class Solution
{
public:
    void maximum_subarray(vector<int> vec)
    {
        int maxSum = INT_MIN;
        for (int start = 0; start < vec.size(); start++)
        {
            int currentSum = 0;
            for (int end = start; end < vec.size(); end++)
            {
                currentSum += vec[end];
                maxSum = max(currentSum, maxSum);
            }
        }
        cout << maxSum;
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