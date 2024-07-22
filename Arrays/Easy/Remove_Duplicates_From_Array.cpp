/*
Problem to remove the duplicates from the Array and return the length of it
 */

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int *arr, int arr_size)
{
    // int count = 0;
    int j = 0;

    for (int i = 0; i < arr_size; i++)
    {
        /* if (arr[i] > arr[j])
        {
            j++;
        } */
        if (arr[i] != arr[j])
        {
            arr[j + 1] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < arr_size - 1; i++)
    {

        cout << arr[i];
    }
    return j;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 4, 4, 5, 5, 6};
    int arr_size = sizeof arr / sizeof arr[0];
    int uniqueElements = removeDuplicates(arr, arr_size);

    cout << "Unique Elements in the Array" << uniqueElements;
}