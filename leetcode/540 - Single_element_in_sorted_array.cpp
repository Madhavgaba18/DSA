// Brute Force Approach - Linear Search with edge cases checks

// Optimized approach - Binary Search with edge cases
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int start = 0, end = nums.size() - 1;

        if (nums.size() == 1)
            return nums[0];

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (mid == 0 && nums[mid] != nums[mid + 1])
                return nums[mid];
            if (mid == nums.size() - 1 && nums[mid] != nums[mid - 1])
                return nums[mid];
            if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
                return nums[mid];

            if (mid % 2 == 0)
            { // even
                if (nums[mid] == nums[mid - 1])
                { // left
                    end = mid - 1;
                }
                else
                { // right
                    start = mid + 1;
                }
            }
            else
            {                                   // odd
                if (nums[mid] == nums[mid - 1]) // right
                {
                    start = mid + 1;
                }
                else // left
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};