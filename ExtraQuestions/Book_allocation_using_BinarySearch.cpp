class Solution
{
public:
    bool isValid(vector<int> &arr, int maxAllowedPages, int k)
    {
        int student = 1;
        int pagesAllotted = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > maxAllowedPages)
            {
                return false;
            }

            if (pagesAllotted + arr[i] < maxAllowedPages)
            {
                pagesAllotted = pagesAllotted + arr[i];
            }
            else
            {
                student++;
                pagesAllotted = arr[i];
            }
        }

        return student > k ? false : true;
    }

    int findPages(vector<int> &arr, int k)
    {
        // code here
        int ans = -1;
        if (k > arr.size() - 1)
            return ans;
        int sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum = sum + arr[i];
        }

        int start = 0, end = sum; // range of possible answer

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (isValid(arr, mid, k))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = start + 1;
            }
        }
        return ans;
    }
};