#include <bits/stdc++.h>
using namespace std;

/* There are three solution for this problem
1. Brute Force: Using Nested for loops to iterate through the array with a flag to determine whether an element exist or not
2. Better: Using Hashing but that will take an extra space
3. Optimal (2 solution possible): using array sum & XOR

Note: The XOR is slightly better than the sum because in the sum, we're using N*(N+1)/2 and N*N will overflow

 */

int MissingNumber(int *arr, int arr_size)
{
    int XOR_1 = 0, XOR_2 = 0;

    for (int i = 0; i < arr_size - 1; i++)
    {
        XOR_1 = XOR_1 ^ arr[i];
        XOR_2 = XOR_2 ^ (i + 1);
    }

    XOR_2 = XOR_2 ^ arr_size;

    return XOR_1 ^ XOR_2;
}

int main()
{

    int arr[] = {1, 2, 3, 5, 6};

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int result = MissingNumber(arr, arr_size);

    cout << " Missing Number is  : " << result;
}