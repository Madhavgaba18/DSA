// Brute Force Approach is Linear search - O(n)

// Opimized Approach - Binary Search - O(log n)
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
                return mid;

            if (nums[mid] <= nums[end])
            { // right sorted - always compare with end
                if (nums[end] >= target && target >= nums[mid])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
            else
            { // left sorted - always compare with start
                if (nums[start] <= target && target <= nums[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
        }
        return -1;
    }
};