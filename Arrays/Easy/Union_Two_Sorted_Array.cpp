/* Program to find out the union of two sorted arrays */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> unionSortedArrays(int *arr_first, int *arr_second, int size_first, int size_second)
{
    int i = 0, j = 0;

    vector<int> union_arr;
    int k = 0;

    while (i < size_first && j < size_second)
    {
        if (arr_first[i] <= arr_second[j] && i < size_first)
        {
            if (union_arr.empty() || union_arr.back() != arr_first[i])
            {

                union_arr.push_back(arr_first[i]);
                k++;
            }
            i++;
        }

        else if (j < size_second)

        {
            if (union_arr.empty() || union_arr.back() != arr_second[j])
            {

                union_arr.push_back(arr_second[j]);
                k++;
            }
            j++;
        }
    }

    while (i < size_first)
    {
        if (union_arr.empty() || union_arr.back() != arr_first[i])
        {
            union_arr.push_back(arr_first[i]);
        }
        i++;
    }
    while (j < size_second)
    {
        if (union_arr.empty() || union_arr.back() != arr_second[j])
        {
            union_arr.push_back(arr_second[j]);
        }
        j++;
    }
    return union_arr;
}

int main()
{
    int arr_first[] = {1, 1, 2, 3, 3, 4, 5, 7, 8};
    int arr_second[] = {3, 4, 4, 5, 6, 6, 6, 10};
    int size_first = sizeof arr_first / sizeof arr_first[0];
    int size_second = sizeof arr_second / sizeof arr_second[0];

    vector<int> result = unionSortedArrays(arr_first, arr_second, size_first, size_second);
    for (int k = 0; k < result.size(); k++)
    {

        cout << " " << result[k];
    }
}