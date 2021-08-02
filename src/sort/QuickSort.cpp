#include <stack>
#include "../../include/sort.hpp"

using namespace std;

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


void quickSortNonRecursive(int arr[], int n)
{
    if (n <= 1)
    {
        return ;
    }

    stack<int> st;
    int pivot = partition(arr, 0, n - 1);
    if (pivot > 1)
    {
        st.push(0);
        st.push(pivot - 1);
    }
    if (pivot < n - 2)
    {
        st.push(pivot + 1);
        st.push(n - 1);
    }

    int left;
    int right;
    while(st.size() != 0)
    {
        right = st.top();
        st.pop();
        left = st.top();
        st.pop();
        pivot = partition(arr, left, right);

        if (pivot > left + 1)
        {
            st.push(left);
            st.push(pivot - 1);
        }
        if (pivot < right - 1)
        {
            st.push(pivot + 1);
            st.push(right);
        }
    }
}
