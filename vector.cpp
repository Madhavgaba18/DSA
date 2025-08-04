#include <iostream>
#include <limits.h>
#include <vector>
#include <algorithm>

using namespace std;

// linear search
int linear_search(vector<int> vec, int target)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            return i;
        }
    }
    return -1;
}

// reverse vector
void reverse_vector(vector<int> vec)
{
    int start = 0, end = vec.size() - 1;
    while (start < end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
    for (int val : vec)
    {
        cout << val << " ";
    }
}

// printing all subarray by brute force
void subarray(vector<int> vec)
{
    int count = 0;
    for (int start = 0; start < vec.size(); start++)
    {
        for (int end = start; end < vec.size(); end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << vec[i];
            }
            cout << " ";
            count++;
        }
        cout << endl;
    }
    cout << "Total subarrays: " << count << endl;
}

int main()
{
    vector<int> vector_a;                    // empty vector
    vector<int> vector_b = {1, 2, -3, 4, 5}; // vector with initial values

    vector<int> vector_c(3, 2); // vector with 3 elements, each initialized to 2
    cout << vector_c[0];
    cout << vector_c[1];
    cout << vector_c[2];

    int res = linear_search(vector_b, 6);
    cout << res;

    reverse_vector(vector_b);
    cout << endl;

    for (int val : vector_b)
    {
        cout << val << endl;
    }

    vector_a.push_back(1);
    cout << vector_a[0] << endl;

    int size = vector_b.size();
    cout << size << endl;

    subarray(vector_b);

    return 0;
}