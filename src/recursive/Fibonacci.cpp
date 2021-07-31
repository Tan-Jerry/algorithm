#include <stdio.h>
#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacci(int n)
{
    int f1 = 1;
    int f2 = 1;

    if (n < 1)
    {
        return;
    }

    int temp;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << f1 << endl;
        }
        else //if (i == 1)
        {
            cout << f2 << endl;
        // }
        // else
        // {
        //     cout << f1 + f2 << endl;
            temp = f1 + f2;
            f1 = f2;
            f2 = temp;
        }
    }
}


// 1, 1, 2, 3, 5, 8, 13, 21, 34