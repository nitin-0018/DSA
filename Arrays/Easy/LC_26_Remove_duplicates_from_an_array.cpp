#include <bits/stdc++.h>
using namespace std;

// Brute forces Method: We'll use a SET to store the unique elements from an array (TC: NlogN) and then replace the array element with SET elements

// Optimal: We'll use two pointer approach in this

int RemoveDeuplicates(int *arr, int arr_size)
{
    int j = 0;
    int count = 0;

    for (int i = 0; i < arr_size; i++)
    {

        if (arr[i] != arr[j])
        {
            arr[j + 1] = arr[i];

            j++;
            count++;
        }
        // j++;
    }

    for (int i = 0; i < arr_size - 1; i++)
    {

        cout << arr[i];
    }

    return count;
}

int main()
{

    int arr[] = {1, 2, 2, 3, 3, 4};

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int result = RemoveDeuplicates(arr, arr_size);

    cout << " Is Array Sorted " << result;
}