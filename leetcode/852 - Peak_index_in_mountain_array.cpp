// Brute Force Approach is Linear search and return max number in array
//                OR
// Brute Force Approach - arr[i-1] < arr[i] > arr[i+1]

// Optimized Approach - Binary Search
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &nums)
    {
        int start = 1;
        int end = nums.size() - 2;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
                return mid;

            if (nums[mid - 1] < nums[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return -1;
    }
};