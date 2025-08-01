#include <iostream>
#include <stdio.h>

using namespace std;

void changeA(int &a)
{
    a = 20;
}

int main()
{
    int a = 10;
    int *ptr = &a;
    int **parPtr = &ptr;
    int *ptr2 = NULL;

    changeA(a);

    cout << a << endl;
    // cout << ptr << endl;
    // cout << *parPtr << endl;
    // cout << ptr2 << endl;
    return 0;
}