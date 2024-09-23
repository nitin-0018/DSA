
#include <bits/stdc++.h>
using namespace std;

int IsArrayRotateSorted(int *arr, int arr_size)
{
    int count = 0;

    for (int i = 1; i < arr_size; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }

    if (arr[arr_size - 1] > arr[0])
    {
        count++;
    }

    if (count <= 1)
    {
        return 1;
    }

    return 0;
}

int main()
{

    int arr[] = {2, 1, 3, 4};

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int result = IsArrayRotateSorted(arr, arr_size);

    cout << " Is Array Sorted & Rotated: " << result;
}
