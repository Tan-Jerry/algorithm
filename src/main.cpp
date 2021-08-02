#include <iostream>

// when preprocessing use -I to indentify the header folder
// #include "sort.hpp"
// #include "recursive.hpp"
#include "../include/sort.hpp"
#include "../include/recursive.hpp"

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "--------   Sort    --------" << endl;

	int arr[] = {2, 4, 1, 6, 5, 9, 7, 8, 3};

    printArray(arr, 9);

//    bubbleSort(arr, 9);
//    selectionSort(arr, 9);
//    insertionSort(arr, 9);
    // quickSort(arr, 9);
    quickSortNonRecursive(arr, 9);

    printArray(arr, 9);

    cout << "-------- Recursive --------" << endl;

    int res = fibonacci(9);
    cout << res << endl;

    printFibonacci(9);

    return 0;
}
