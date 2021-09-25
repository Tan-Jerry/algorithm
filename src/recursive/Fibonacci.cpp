#include <iostream>

#include "../../include/recursive.hpp"

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

int fibonacci_DP(int n, vector<int>& vecResult)
{
    if (vecResult[n - 1] != 0)
    {
        return vecResult[n - 1];
    }

    if (n == 1 || n == 2)
    {
        vecResult[n - 1] = 1;
    }
    else
    {
        vecResult[n - 1] = fibonacci_DP(n - 1, vecResult) + fibonacci_DP(n - 2, vecResult);
    }
    
    cout << n << ": " << vecResult[n - 1] << endl;

    return vecResult[n - 1];
}
// 1, 1, 2, 3, 5, 8, 13, 21, 34