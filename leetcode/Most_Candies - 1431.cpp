// Brute Force Approach/ most optimized
class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> result(candies.size(), false);
        int greatest = 0;
        for (int i = 0; i < candies.size(); i++)
        {
            greatest = max(greatest, candies[i]);
        }

        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies >= greatest)
            {
                result[i] = true;
            }
        }

        return result;
    }
};