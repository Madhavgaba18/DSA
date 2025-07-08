#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "give me a number : " << endl;
    cin >> a;

    cout << "give me another number : " << endl;
    cin >> b;

    int sum = a + b;
    int differnce = a - b;
    int product = a * b;
    double quotient = a / (double)b;
    int remainder = a % b;

    cout << "Sum: " << sum << endl
         << "differnce: " << differnce << endl
         << "Product: " << product << endl
         << "Quotient: " << quotient << endl
         << "Remainder: " << remainder << endl;

    return 0;
}
