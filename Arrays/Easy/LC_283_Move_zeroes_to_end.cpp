#include <bits/stdc++.h>
using namespace std;

void MoveZeroesToEnd(int *arr, int arr_size)
{
    int j = 0;
    for (int i = 0; i < arr_size; i++)
    {

        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{

    int arr[] = {1, 2, 0, 2, 0, 1, 3, 0};

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    MoveZeroesToEnd(arr, arr_size);

    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
}