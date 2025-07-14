#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector_a;             // empty vector
    vector<int> vector_b = {1, 2, 3}; // vector with initial values

    vector<int> vector_c(3, 2); // vector with 3 elements, each initialized to 2
    // cout << vector_c[0];
    // cout << vector_c[1];
    // cout << vector_c[2];

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