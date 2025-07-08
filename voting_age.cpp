#include <iostream>
using namespace std;

int main()
{
    int n;
    string a;
    cout << "what is your name ? ";
    cin >> a;
    cout << "Hello " << a << endl;
    cout << "what is your age ? ";
    cin >> n;
    if (n >= 18)
    {
        cout << "you can vote";
    }
    else
    {
        cout << "you cannot vote";
    }
    return 0;
}