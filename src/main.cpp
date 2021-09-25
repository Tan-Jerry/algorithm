#include <cstdlib>
#include <ctime>

#include <iostream>
#include <vector>

// when preprocessing use -I to indentify the header folder
// #include "sort.hpp"
// #include "recursive.hpp"
#include "../include/sort.hpp"
#include "../include/recursive.hpp"
#include "../include/search.hpp"

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* randArray(int n, int rangeL, int rangeR)
{
    assert(rangeL <= rangeR);

    int *arr = new int[n];

    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
    }

    return arr;
}

int main()
{
    cout << "--------   Sort    --------" << endl;

    int *arr = randArray(9, 1, 9);
	// int arr[] = {2, 4, 1, 6, 5, 9, 7, 8, 3};
    //int arr[] = {5, 6, 7, 8, 9, 1, 2, 3, 4};

    printArray(arr, 9);

//    bubbleSort(arr, 9);
//    selectionSort(arr, 9);
//    insertionSort(arr, 9);
//    quickSort(arr, 9);
//    quickSortNonRecursive(arr, 9);
//    heapSort(arr, 9);
//    mergeSort(arr, 0, 8);
    shellSort(arr, 9);

    printArray(arr, 9);

    if (arr != nullptr)
    {
        delete [] arr;
    }

    cout << "-------- Recursive --------" << endl;

    int res = fibonacci(9);
    cout << res << endl;

    vector<int> tempRes(9, 0);
    int resdd = fibonacci_DP(9, tempRes);
    cout << resdd << endl;

    printFibonacci(9);

    cout << sizeof(int) << endl;

    int sortArr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int bsRes = binarySearch(sortArr, 9, 11);
    cout << bsRes << endl;

    return 0;
}
