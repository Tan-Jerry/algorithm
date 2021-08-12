#include "../../include/sort.hpp"

void merge(int arr[], int L, int M, int R)
{
    int L_SIZE = M - L;
    int R_SIZE = R - M + 1;

    if (L_SIZE <= 0 || R_SIZE == 0)
    {
        return;
    }

    int arr_L[L_SIZE];
    int arr_R[R_SIZE];

    for (int i = L; i < M; i++)
    {
        arr_L[i - L] = arr[i];
    }

    for (int i = M; i <= R; i++)
    {
        arr_R[i - M] = arr[i];
    }

    int i = 0, j = 0, k = L;
    while (i < L_SIZE && j < R_SIZE)
    {
        if (arr_L[i] <= arr_R[j])
        {
            arr[k] = arr_L[i];
            i++;
        }
        else
        {
            arr[k] = arr_R[j];
            j++;
        }
        k++;
    }

    while (i < L_SIZE)
    {
        arr[k] = arr_L[i];
        k++;
        i++;
    }
    while (j < R_SIZE)
    {
        arr[k] = arr_R[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int L, int R)
{
    if (L == R)
    {
        return;
    }

    // 这里需要注意一下，必定：M>=L && M < R
    int M = (L + R) / 2;

    mergeSort(arr, L, M);
    mergeSort(arr, M + 1, R);
    merge(arr, L, M + 1, R);
}