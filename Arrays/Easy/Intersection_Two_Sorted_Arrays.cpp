/* Program to find out the intersection of two sorted arrays | repetition is allowed */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> intersectionSortedArrays(int *arr_first, int *arr_second, int size_first, int size_second)
{
    int i = 0, j = 0;

    vector<int> union_arr;
    int k = 0;

    while (i < size_first && j < size_second)

    {
        cout << "arr[i]" << arr_first[i] << " & " << arr_second[j] << endl;
        if (arr_first[i] == arr_second[j])
        {

            union_arr.push_back(arr_first[i]);
            i++;
            j++;
        }

        if (
            arr_first[i] < arr_second[j])
        {

            i++;
        }

        if (
            arr_first[i] > arr_second[j])
        {

            j++;
        }
    }

    return union_arr;
}

int main()
{
    int arr_first[] = {1, 2, 3, 3, 4, 4, 5, 6, 6, 8};
    int arr_second[] = {2, 3, 4, 4, 5, 6, 6, 6, 10};
    int size_first = sizeof arr_first / sizeof arr_first[0];
    int size_second = sizeof arr_second / sizeof arr_second[0];

    vector<int> result = intersectionSortedArrays(arr_first, arr_second, size_first, size_second);
    for (int k = 0; k < result.size(); k++)
    {

        cout << " " << result[k];
    }
}