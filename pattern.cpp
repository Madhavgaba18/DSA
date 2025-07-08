#include <iostream>
#include <vector>
using namespace std;

// Butterfly pattern
//*        *
//**      **
//***    ***
//****  ****
//**********
//**********
//****  ****
//***    ***
//**      **
//*        *

int main()
{
    int n = 5;
    // top
    // left side
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // bottom
    for (int i = 0; i < n; i++)
    {
        // left side
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        // right side
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// pyramid pattern
// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < i; j++)
//         {
//             cout << j + 1;
//         }
//         for (int j = i; j >= 0; j--)
//         {
//             cout << j + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// inverted triangle pattern
// int main()
// {
//     int n = 5;
//     int nums = 1;
//     for (int i = 0; i < n; i++)
//     {
//         // spaces
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         // num
//         for (int j = i; j < n - 1; j++)
//         {
//             cout << (i + 1);
//         }
//         cout << endl;
//     }
//     return 0;
// }

// floyd's triangle pattern - triangle pattern with ABC
// int main()
// {
//     int n = 4;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j > 0; j--)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// floyd's triangle pattern - triangle pattern with increasing backward numbers
// int main()
// {
//     int n = 4;
//     int count = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j > 0; j--)
//         {
//             cout << count << " ";
//             count++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// triangle pattern with backward number
// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j > 0; j--)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// triangle patter with increasing numbers
// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= i + 1; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// triangle pattern with number and alphabets
// int main()
// {
//     int n = 5;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j < i + 1; j++)
//         {
//             cout << ch;
//         }
//         ch = ch + 1;
//         cout << endl;
//     }
// }

// triangle pattern with *
// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// continous ABC square pattern
// int main()
// {
//     char n = 3;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << ch;
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
// }

// continous counting square pattern
// int main()
// {
//     int n = 3;
//     int count = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << count;
//             count++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// char square pattern
//  int main()
//  {
//      int n = 4;
//      for (int i = 1; i <= n; i++)
//      {
//          char ch = 'A';
//          for (int j = 1; j <= n; j++)
//          {
//              cout << ch;
//              ch = ch + 1;
//          }
//          cout << endl;
//      }
//      return 0;
//  }
