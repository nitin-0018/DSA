#include <bits/stdc++.h>
using namespace std;

int MaxConsecutiveOnes(int *arr, int arr_size)
{
    int max = 0;
    int count = 0;

    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] == 1)
        {
            count++;
                }
        if (count >= max)
        {

            max = count;
        }

        if (arr[i] == 0)
        {
            count = 0;
        }
    }

    return max;
}

int main()
{

    int arr[] = {1, 1, 1, 0, 1, 1};

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int result = MaxConsecutiveOnes(arr, arr_size);

    cout << " Maximum Number of consecutive ones is : " << result;
}