#include <bits/stdc++.h>
using namespace std;

int NumberAppearOne(int *arr, int arr_size)
{
    int XOR = 0;

    for (int i = 0; i < arr_size; i++)
    {
        XOR = XOR ^ arr[i];
    }

    return XOR;
}

int main()
{

    int arr[] = {4, 1, 2, 1, 2};

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int result = NumberAppearOne(arr, arr_size);

    cout << " Number that appear once is  : " << result;
}