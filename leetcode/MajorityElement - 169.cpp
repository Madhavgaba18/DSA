// brute force approach - O(n^2)
void majorElement(vector<int> vec)
{

    for (int i = 0; i < vec.size(); i++)
    {
        int count = 1;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] == vec[j])
            {
                count++;
            }
        }
        if (count > vec.size() / 2)
        {
            cout << vec[i] << endl;
        }
    }
}

// Brute force optimized approach - O(n log n)
void majorSortedElement(vector<int> vec)
{
    sort(vec.begin(), vec.end());
    int freq = 1;
    int ans = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] == vec[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = vec[i];
        }

        if (freq > vec.size() / 2)
        {
            cout << ans << endl;
        }
    }
}

// Moore's Voting Algorithm - O(n)
int majorElementOptimized(vector<int> vec)
{
    int freq = 0;
    int ans = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (freq == 0)
        {
            ans = vec[i];
        }
        if (vec[i] == ans)
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }

    int count = 0;
    for (int val : vec)
    {
        if (val == ans)
        {
            count++;
        }
    }

    if (count > vec.size() / 2)
    {
        return ans;
    }
    else
    {
        return -1;
    }
}
