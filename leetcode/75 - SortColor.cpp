// Brute Force Approach
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
    }
};

// a better optimal approach but not fully optimized
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int count0 = 0, count1 = 0, count2 = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                count0++;
            }
            else if (nums[i] == 1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }

        int index = 0;
        for (int i = 0; i < count0; i++)
        {
            nums[index++] = 0;
        }
        for (int i = 0; i < count1; i++)
        {
            nums[index++] = 1;
        }
        for (int i = 0; i < count2; i++)
        {
            nums[index++] = 2;
        }
    }
};

// Dutch National Flag Algorithm
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};