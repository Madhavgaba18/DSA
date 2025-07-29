// Brute Force Approach
class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            int count = 1;
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
            if (count > arr.size() / 4)
            {
                return arr[i];
            }
        }
        return -1;
    }
};

// optimized approach for already sorted array
class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        int freq = 1;
        int ans = arr[0];
        if (arr.size() == 1)
            return arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] == arr[i - 1])
            {
                freq++;
            }
            else
            {
                freq = 1;
                ans = arr[i];
            }

            if (freq > arr.size() / 4)
            {
                return arr[i];
            }
        }
        return -1;
    }
};