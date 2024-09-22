#include <bits/stdc++.h>
using namespace std;

void reverseArray(int *arr, int start, int end)
{
    int first = start;
    int last = end;

    while (first <= last)
    {
        swap(arr[first], arr[last]);
        first++;
        last--;
    }
}

void RightRotateArrayDPlace(int *arr, int arr_size, int d)
{
    // The sequence to left rotate an array by D places is give below
    //  To rotate it to the right: 2, 1, 3

    // 1. reverse the whole array
    reverseArray(arr, 0, arr_size - 1);

    // 2. reverse the array for 0 to d places
    reverseArray(arr, 0, d - 1);

    // 3. reverse the remaining array
    reverseArray(arr, d, arr_size - 1);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int d = 3;

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    RightRotateArrayDPlace(arr, arr_size, d);

    for (int i = 0; i < arr_size; i++)
    {

        cout << arr[i];
    }
}