#include <iostream>

using namespace std;

int decToBin(int decNum)
{
    int ans = 0;
    int pow = 1;
    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans = ans + (rem * pow);
        pow = pow * 10;
    }
    cout << ans << endl;
    return ans;
}

int binToDec(int binNum)
{
    int ans = 0;
    int pow = 1;
    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans = ans + (rem * pow);
        binNum = binNum / 10;
        pow = pow * 2;
    }
    cout << ans << endl;
    return ans;
}

int main()
{
    int decNum = 6;
    int binNum = 101010;
    decToBin(decNum);
    binToDec(binNum);
    // for (int i = 0; i < 10; i++)
    // {
    //     decToBin(i); // Convert numbers 0 to 9 to binary
    // }

    return 0;
}