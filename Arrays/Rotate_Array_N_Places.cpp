/*
Problem to rotate the Array by D place
 */

#include <bits/stdc++.h>
using namespace std;

void rotateArrayNPlace(int *arr, int arr_size, int d)
{

    // First make a temp array to store d (where d is number of rotation) elements of array
    int temp[d] = {};

    // Now Store the elements
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    // Now make put the elements to their rotated places
    for (int i = d; i < arr_size; i++)
    {
        arr[i - d] = arr[i];
    }

    // for let's store the remaining elements from temp into the original array
    for (int i = 0; i < d; i++)
    {
        arr[arr_size - d + i] = temp[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int arr_size = sizeof arr / sizeof arr[0];

    int d = 0;

    cin >> d;
    rotateArrayNPlace(arr, arr_size, d);
    cout << "Rotated Array by N places is ";
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}