// leetcode/Two_Sum_II - 167.cpp

// brute force pair sum
void pairSum(vector<int> vec, int target)
{
    int sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            sum = vec[i] + vec[j];
            if (sum == target)
            {
                cout << "pair found: " << vec[i] << " and " << vec[j] << endl;
            }
        }
    }
}

// two pointer approach
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> ans;
        int ps = 0;
        int i = 0, j = numbers.size() - 1;
        while (i < j)
        {
            ps = numbers[i] + numbers[j];
            if (ps < target)
            {
                i++;
            }
            else if (ps > target)
            {
                j--;
            }
            else
            {
                ans.push_back(i + 1);
                ans.push_back(j + 1);
                return ans;
            }
        }
        return ans;
    }
};