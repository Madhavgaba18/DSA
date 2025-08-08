class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int maxElement = INT_MIN;
        int index = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (maxElement < nums[i])
            {
                index = i;
            }
            maxElement = max(maxElement, nums[i]);
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (maxElement == nums[i])
            {
                continue;
            }
            if (maxElement < nums[i] * 2)
            {
                return -1;
            }
        }

        return index;
    }
};