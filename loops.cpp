#include <iostream>
using namespace std;

// factorial of n
int main()
{
    int n = 5;
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product = product * i;
        cout << i << endl;
    }
    cout << "the product is : " << product << endl;
    return 0;
}

// sum of all number divisble by 3
// int main()
// {
//     int n = 30;
//     int sum = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (i % 3 == 0)
//         {
//             cout << i << endl;
//             sum = sum + i;
//         }
//     }
//     cout << "this is the Sum" << sum;
//     return 0;
// }

// printing pattern using nested-loops
// int main()
// {
//     int n = 10;
//     int m = 10;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// check if the n is prime or not
// int main()
// {
//     int n = 16;
//     bool isprime = true;
//     for (int i = 2; i * i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             isprime = false;
//             break;
//         }
//     }

//     cout << isprime;
//     return 0;
// }

// sum of all odd or even number by using while loop
// int main()
// {
//     int n = 10;
//     int sum = 0;
//     int i = 0;
//     while (i <= n)
//     {
//         if (i % 2 != 0)
//         {
//             sum = sum + i;
//         }
//         i++;
//     }
//     cout << sum;
// }

// sum of all odd numbers or even numbers by for loop
// int main()
// {
//     int n = 10;
//     int sum = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             sum = sum + i;
//         }
//     }
//     cout << sum;
// }

// sum till n
// int main()
// {
//     int n = 0;
//     int sum = 0;
//     while (n <= 100)
//     {
//         sum = sum + n;
//         n++;
//     }
//     cout << sum;
//     return 0;
// }

// print numbers
//  int main()
//  {
//      for (int i = 0; i <= 10; i++)
//      {
//          cout << i;
//      }
//      return 0;
//  }