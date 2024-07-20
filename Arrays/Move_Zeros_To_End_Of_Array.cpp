/*
Problem to move all the zeros in the array to the last
 */

#include <bits/stdc++.h>
using namespace std;

void moveZeroesToTheEnd(int *arr, int arr_size)
{
    int j = 0;
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] != 0 && arr[j] == 0)
        {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }

        if (arr[j] != 0)
        {
            j++;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 0, 3, 0, 0, 5, 5, 6};
    int arr_size = sizeof arr / sizeof arr[0];
    moveZeroesToTheEnd(arr, arr_size);

    cout << "Array after moving zeroes to the end is ";
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}