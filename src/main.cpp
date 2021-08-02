#include <iostream>

// when preprocessing use -I to indentify the header folder
// #include "sort.hpp"
// #include "recursive.hpp"
#include "../include/sort.hpp"
#include "../include/recursive.hpp"

using namespace std;

int main()
{
    cout << "--------   Sort    --------" << endl;

	int arr[] = {2, 4, 1, 6, 5, 9, 7, 8, 3};

//    bubbleSort(arr, 9);
//    selectionSort(arr, 9);
//    insertionSort(arr, 9);
    quickSort(arr, 9);

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << endl;
    }


    cout << "-------- Recursive --------" << endl;

    int res = fibonacci(9);
    cout << res << endl;

    printFibonacci(9);

    return 0;
}
