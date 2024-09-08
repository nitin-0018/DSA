#include <bits/stdc++.h>
using namespace std;

int SecondSmallestElement(int *arr, int arr_size)
{

    int smallest = arr[0];
    int secondSmallest = INT_MAX;

    for (int i = 0; i < arr[i]; i++)
    {

        // Firstly, find the smallest element in the array

        if (smallest > arr[i])
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }

        // Now, we'll find the second Smallest Element in the array
        if (arr[i] != smallest && secondSmallest > arr[i])
        {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int main()
{

    int arr[] = {10, 5, 8, 30, 15, 7, 20};

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int result = SecondSmallestElement(arr, arr_size);

    cout << " Second Smallest Element is " << result;
}