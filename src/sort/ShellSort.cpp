
void shellSort(int arr[], int n)
{
    for (int step = n / 2; step > 0; step = step / 2)
    {
    for (int i = step; i < n; i++)
    {
        for (int j = i; j - step >= 0; j = j - step)
        {
            if (arr[j] < arr[j - step])
            {
                int temp = arr[j - step];
                arr[j - step] = arr[j];
                arr[j] = temp;
            }
        }
    }
    }
}