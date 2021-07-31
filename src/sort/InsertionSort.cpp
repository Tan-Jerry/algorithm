#include <stdio.h>

//void insert(int arr[], int pos)
//{
//    int value = arr[pos];
////    int i = pos - 1;
////    for (; i >= 0; i--)
////    {
////        if (arr[i] > value)
////        {
////            arr[i + 1] = arr[i];
////            continue;
////        }
////        break;
////    }
////    arr[i + 1] = value;
//    int i = pos;
//    while (arr[i - 1] > value)
//    {
//        arr[i] = arr[i - 1];
//        i--;
//        if (i == 0)
//        {
//            break;
//        }
//    }
//
//    arr[i] = value;
//}
//
//void insertionSort(int arr[], int n)
//{
//    for (int i = 1; i < n; i++)
//    {
//        insert(arr, i);
//    }
//}

void insert(int arr[], int n)
{
    int temp;
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] < arr[i - 1])
        {
            temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        }
    }
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        insert(arr, i + 1);
    }
}
