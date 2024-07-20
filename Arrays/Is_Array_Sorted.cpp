/*
Problem to find the largest element in the array
 */

#include <bits/stdc++.h>
using namespace std;

int isArraySorted(int *arr, int arr_size)
{

    for (int i = 0; i < arr_size - 1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {1, 20, 3, 4, 5};
    int arr_size = sizeof arr / sizeof arr[0];
    int sorted = isArraySorted(arr, arr_size);

    cout << "Is Array Sorted " << sorted;
}