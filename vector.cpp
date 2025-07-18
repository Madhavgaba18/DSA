#include <iostream>
#include <vector>

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

int main()
{
    vector<int> vector_a;                      // empty vector
    vector<int> vector_b = {1, 2, 3, 5, 6, 7}; // vector with initial values

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

    int size = vector_c.size();
    cout << size << endl;

    return 0;
}