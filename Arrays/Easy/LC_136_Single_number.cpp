/* Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.*/

/*

Approach:

Two important properties of XOR are the following:

XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1.
XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a.  ←Property 2
 */

#include <bits/stdc++.h>
using namespace std;

int singleNumber(int *arr, int size)
{

    /* First Method is Hash Array to store the count of respective numbers */
    /* int second_arr[size+1] = {0};
    int index = 0;

    for (int i = 0; i < size; i++)
    {
        second_arr[arr[i]]++;
        // cout << second_arr[i] << endl;
    }

    for (int i = 0; i < size; i++)
    {
        if (second_arr[i] == 1)
        {
            index = i;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << second_arr[i] << endl;
    }

    return index;
    */

    int result = 0;

    for (int i = 0; i < size; i++)
    {
        result = result ^ arr[i];
        }
    return result;
}

int main()
{
    int arr[] = {4, 1, 2, 1, 2, 4, 3};
    int size = sizeof arr / sizeof arr[0];

    int result = singleNumber(arr, size);
    cout << "Single Number is : " << result;
}