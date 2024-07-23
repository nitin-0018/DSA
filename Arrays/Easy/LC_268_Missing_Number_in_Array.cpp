/* Program to find out the missing number in an array sum=n*(n-1)/2*/

#include <bits/stdc++.h>
using namespace std;

int missingNumber(int *arr, int size)
{
    int sum = 0;

    int arr_sum = 0;

    for (int i = 0; i < size; i++)
    {
        arr_sum = arr_sum + arr[i];
    }

    for (int i = 1; i <= size; i++)
    {
        sum = sum + i;
    }
    cout << "arr_sum" << arr_sum << "sum" << sum << endl;
    return sum - arr_sum;

    /* Second Solution */
    /*

    int N = nums.size();
    int xor1 = 0;
    int xor2 = 0;
    int n = N - 1;

    for (int i = 0; i <= n; i++)
    {
        xor2 = xor2 ^ nums[i];
        xor1 = xor1 ^ (i + 1);
    }

    return xor1 ^ xor2;
*/
}

int main()
{
    int arr[] = {0, 1, 4, 5, 2, 6, 7};
    int size = sizeof arr / sizeof arr[0];

    int result = missingNumber(arr, size);
    cout << "Missing Number is : " << result;
}