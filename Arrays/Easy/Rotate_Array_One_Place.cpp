/*
Problem to rotate the Array by 1 place
 */

#include <bits/stdc++.h>
using namespace std;

void rotateArrayOnePlace(int *arr, int arr_size)
{
    int j = arr[0];
    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[arr_size - 1] = j;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 4, 4, 5, 5, 6};
    int arr_size = sizeof arr / sizeof arr[0];
    rotateArrayOnePlace(arr, arr_size);

    cout << "Rotated Array is ";
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}