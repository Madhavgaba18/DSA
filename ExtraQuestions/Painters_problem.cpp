#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

bool isValid(vector<int> time, int n, int maxTime, int k)
{
    int color = 1;
    int timeTaken = 0;

    for (int i = 0; i < n; i++)
    {
        if (time[i] > maxTime)
        {
            return false;
        }
        if (timeTaken + time[i] <= maxTime)
        {
            timeTaken = timeTaken + time[i];
        }
        else
        {
            color++;
            timeTaken = time[i];
        }
    }

    if (color > k)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int painter(vector<int> &time, int k)
{
    int ans = -1;
    int n = time.size();
    int start = INT_MIN;
    int end = 0;
    for (int i = 0; i < n; i++)
    {
        end = end + time[i];
        start = max(start, time[i]);
    }

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        cout << start << mid << end << endl;

        if (isValid(time, n, mid, k))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> time = {40, 30, 10, 20};
    int k = 2;
    cout << painter(time, k) << endl;

    return 0;
}