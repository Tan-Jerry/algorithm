#include "../../include/search.hpp"

int binarySearch(int arr[], int L, int R, int key)
{
    return -1;
}

int binarySearch(int arr[], int n, int key)
{
//    return binarySearch(arr, 0, n -1, key);
    int L = 0;
    int R = n - 1;

    while (L <= R)
    {
        int M = (L + R) / 2;
        if (key == arr[M])
        {
            return M;
        }
        if (key < arr[M])
        {
            R = M - 1;
        }
        else
        {
            L = M + 1;
        }
    }

    return -1;
}