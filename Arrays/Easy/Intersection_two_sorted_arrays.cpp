#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> IntersectionOfTwoSortedArray(int *arr_1, int *arr_2, int arr_1_size, int arr_2_size)
{
    int j = 0;
    int i = 0;

    vector<int> result;
    while (i < arr_1_size && j < arr_2_size)

    {
        if (arr_1[i] < arr_2[j])
        {
            i++;
        }

        else if (arr_1[i] > arr_2[j])
        {
            j++;
        }

        if (arr_1[i] == arr_2[j])
        {

            result.push_back(arr_1[i]);
            i++;
            j++;
        }
    }

    return result;
}

int main()
{

    int arr_1[] = {1, 2, 3, 3, 4, 5, 7, 8};
    int arr_2[] = {3, 3, 4, 4, 5, 6, 6, 6, 10};

    int arr_1_size = sizeof(arr_1) / sizeof(arr_1[0]);
    int arr_2_size = sizeof(arr_2) / sizeof(arr_2[0]);

    vector<int> result = IntersectionOfTwoSortedArray(arr_1, arr_2, arr_1_size, arr_2_size);
    for (int k = 0; k < result.size(); k++)
    {
        cout << result[k] << " ";
    }
}