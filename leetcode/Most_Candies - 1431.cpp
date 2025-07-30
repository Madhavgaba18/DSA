// Brute Force Approach/ most optimized
class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> result;
        int greatest = 0;
        for (int i = 0; i < candies.size(); i++)
        {
            greatest = max(greatest, candies[i]);
        }

        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies < greatest)
            {
                result.push_back(false);
            }
            else
            {
                result.push_back(true);
            }
        }

        return result;
    }
};