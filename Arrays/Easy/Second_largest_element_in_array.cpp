#include <bits/stdc++.h>
using namespace std;

int SecondLargestElement(int *arr, int arr_size)
{

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 0; i < arr[i]; i++)
    {

        // Firstly, find the largest element in the array

        if (largest < arr[i])
        {
            secondLargest = largest;
            largest = arr[i];
            // secondLargest = largest;
        }

        // Now, we'll find the second Largest Element in the array
        if (arr[i] != largest && secondLargest < arr[i])
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main()
{

    int arr[] = {10, 5, 30, 15, 20};

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int result = SecondLargestElement(arr, arr_size);

    cout << " Second Largest Element is " << result;
}