/*
Problem to find the largest, secondLargest, secondSmallest element in the array
 */

/* #include <bits/stdc++.h>
using namespace std;

int SecondLargestElement(int *arr, int arr_size)
{
    int largest = arr[0];
    int secondLargest = arr[1];
    for (int i = 0; i < arr_size - 1; i++)
    {
        if (arr[i + 1] > largest)
        {
            secondLargest = largest;
            largest = arr[i + 1];
        }

        if (arr[i + 1] < largest && arr[i + 1] > secondLargest)
        {
            secondLargest = arr[i + 1];
        }
        cout << "Largest" << largest << "Sec" << secondLargest << endl;
    }
    return secondLargest;
}

int SecondSmallestElement(int *arr, int arr_size)
{
    int smallest = arr[0];
    int secondSmallest = arr[1];
    for (int i = 0; i < arr_size - 1; i++)
    {
        if (arr[i + 1] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i + 1];
            cout << "inside first If----";
        }

        if (arr[i + 1] > smallest && arr[i + 1] < secondSmallest)
        {
            secondSmallest = arr[i + 1];
            cout << "inside second If----";
        }
        cout << "Smallest" << smallest << "Sec" << secondSmallest << endl;
    }
    return secondSmallest;
}

int main()
{
    int arr[] = {22781, 3129, 27080, 16834, 9359, 17899, 9920, 3833, 27089, 17326};
    int arr_size = sizeof arr / sizeof arr[0];
    int secondLargest = SecondLargestElement(arr, arr_size);
    int secondSmallest = SecondSmallestElement(arr, arr_size);

    // cout << "Second Largest Element is " << secondLargest;
    // cout << "Second Smallest Element is " << secondSmallest;
} */

#include <bits/stdc++.h>
using namespace std;

int largestElement(int *arr, int arr_size)
{

    int largest = arr[0];

    for (int i = 0; i < arr[i]; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }

    return largest;
}

int main()
{

    int arr[] = {10, 20, 40, 5, 20};

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int result = largestElement(arr, arr_size);

    cout << "Largest Element is " << result;
}