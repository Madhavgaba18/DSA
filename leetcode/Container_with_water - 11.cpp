// Brute Force Approach
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int ans = 0;
        for (int i = 0; i < height.size(); i++)
        {
            for (int j = i + 1; j < height.size(); j++)
            {
                int length = min(height[i], height[j]);
                int breadth = j - i;
                ans = max(ans, length * breadth);
            }
        }
        return ans;
    }
};

// Optimized Approach using Two Pointers
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int ans = 0;
        int i = 0;
        int j = height.size() - 1;
        while (i < j)
        {
            int breadth = j - i;
            int length = min(height[i], height[j]);
            ans = max(ans, length * breadth);

            height[i] > height[j] ? j-- : i++;
        }
        return ans;
    }
};