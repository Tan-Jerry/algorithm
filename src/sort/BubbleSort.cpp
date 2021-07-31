#include <stdio.h>

//void bubble(int arr[], int n)
//{
//	int temp;
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (arr[i] > arr[i+1])
//		{
//			temp = arr[i];
//			arr[i] = arr[i+1];
//			arr[i+1] = temp;
//		}
//	}
//}
//
//void bubbleSort(int arr[], int n)
//{
//	for (int i = n; i > 1; i--)
//	{
//		bubble(arr, i);
//	}
//}

void bubble(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

void bubbleSort(int arr[], int n)
{
    int temp;

    for (int j = 0; j < n; j++)
    {
        bubble(arr, n - j);
    }
}

