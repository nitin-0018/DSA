/* Caution: I made a mistake the function below while looping through both array

>> I was check if result vector contain the same element or not and that's the wrong because u need to check the

the size of the result before accessing to its element if not the program will crash

 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> UnionOfTwoSortedArray(int *arr_1, int *arr_2, int arr_1_size, int arr_2_size)
{
    int j = 0;
    int i = 0;

    vector<int> result;
    while (i < arr_1_size && j < arr_2_size)

    {

        if (arr_1[i] <= arr_2[j])
        {
            if (result.size() == 0 || result.back() != arr_1[i])
            {
                cout << "called";
                result.push_back(arr_1[i]);
            }
            i++;
        }
        else
        {
            if (result.size() == 0 || result.back() != arr_2[j])
            {

                result.push_back(arr_2[j]);
            }
            j++;
        }
    }

    while (i < arr_1_size)
    {
        if (result.size() == 0 || result.back() != arr_1[i])
        {

            result.push_back(arr_1[i]);
        }
        i++;
    }

    while (j < arr_2_size)
    {
        if (result.size() == 0 || result.back() != arr_2[j])
        {
            result.push_back(arr_2[j]);
        }
        j++;
    }

    return result;
}

int main()
{

    int arr_1[] = {1, 1, 2, 3, 3, 4, 5, 7, 8};
    int arr_2[] = {3, 4, 4, 5, 6, 6, 6, 10};

    int arr_1_size = sizeof(arr_1) / sizeof(arr_1[0]);
    int arr_2_size = sizeof(arr_2) / sizeof(arr_2[0]);

    vector<int> result = UnionOfTwoSortedArray(arr_1, arr_2, arr_1_size, arr_2_size);
    for (int k = 0; k < result.size(); k++)
    {
        cout << result[k] << " ";
    }
}