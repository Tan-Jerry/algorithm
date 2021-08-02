#include "../../include/sort.hpp"

int partition(int arr[], int left, int right)
{
    int value = arr[left];

    while (left < right)
    {
        while (left < right && arr[right] >= value)
        {
            right--;
        }
        if (left < right)
        {
            arr[left] = arr[right];
            left++;
        }
        while (left < right && arr[left] <= value)
        {
            left++;
        }
        if (left < right)
        {
            arr[right] = arr[left];
            right--;
        }

        if (left == right)
        {
            arr[left] = value;
        }
    }

    return left;
}

void qSort(int arr[], int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int pivot = partition(arr, left, right);
    qSort(arr, left, pivot -1);
    qSort(arr, pivot + 1, right);
}

void quickSort(int arr[], int n)
{
    qSort(arr, 0, n - 1);
}

