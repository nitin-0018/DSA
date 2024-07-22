/* Program to find out the max occurance of One in a array that contains 1 & 0*/

#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(int *arr, int size)
{
    int max = 0;
    int total_count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            max++;
        }
        else
        {
            max = 0;
        }

        if (max > total_count)
        {
            total_count = max;
        }
    }
    return total_count;
}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 1, 1, 0, 1};
    int size = sizeof arr / sizeof arr[0];

    int result = maxConsecutiveOnes(arr, size);
    cout << "Max Consecutive Ones Count is : " << result;
}