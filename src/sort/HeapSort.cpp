#include "../../include/sort.hpp"

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void heapify(int arr[], int n, int i)
{
    if (i >= n)
    {
        return;
    }

    int c1 = 2 * i + 1;
    int c2 = 2 * i + 2;

    int max = i;
    if (c1 < n && arr[c1] > arr[max])
    {
        max = c1;
    }
    if (c2 < n && arr[c2] > arr[max])
    {
        max = c2;
    }
    if (max != i)
    {
        swap(arr, max, i);
        heapify(arr, n, max);
    }
}

void buildHeap(int arr[], int n)
{
    int lastNode = n - 1;
    int lastNodeParent = (lastNode - 1) / 2;

    for (int i = lastNodeParent; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}

void heapSort(int arr[], int n)
{
    buildHeap(arr, n);

    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr, 0, i);
        heapify(arr, i, 0);
    }
}