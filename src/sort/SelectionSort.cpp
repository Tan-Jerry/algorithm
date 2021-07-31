#include <stdio.h>

//int findMaxPos(int arr[], int n)
//{
//    int max = arr[0];
//    int pos = 0;
//    for (int i = 1; i < n; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//            pos = i;
//        }
//    }
//
//    return pos;
//}
//
//void selectionSort(int arr[], int n)
//{
//    int pos;
//    int temp;
//    for (int i = 0; i < n; i++)
//    {
//        pos = findMaxPos(arr, n - i);
//        temp = arr[n - i - 1];
//        arr[n - i - 1] = arr[pos];
//        arr[pos] = temp;
//    }
//}

int findMaxPos(int arr[], int n)
{
    int pos = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[pos] < arr[i])
        {
            pos = i;
        }
    }
    return pos;
}

void selectionSort(int arr[], int n)
{
    int maxPos;
    int temp;
    for (int i = 0; i < n; i++)
    {
        maxPos = findMaxPos(arr, n - i);
        temp = arr[maxPos];
        arr[maxPos] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
