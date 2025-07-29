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
