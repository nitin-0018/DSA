/*
Given an array arr containing n integers and an integer k.
Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value k.

Solution: There'll be three approach for this problem

1. Brute Force: Generate the sum of all the subarray with running 3 looops

2. Better: Use a map to calculate the sum by iterate the array and check if it's same
or not if it is then calculate the index and find the remaining sum-K to check whether
it exist in hashmap or not. if it is then calculate the length of subarray and update it
remember, we take the left most X=X-K+K to ensure we don't update if remainder is found

3. Optimal: Use two pointer approach to iterate the sum and length
*/

#include <bits/stdc++.h>
using namespace std;

/* Better Approach */
/* int LongestSubArraySum(int *arr, int arr_size, int K)
{
    long long sum = 0;
    map<long long, int> presumMap;
    int maxLength = 0;

    for (int i = 0; i < arr_size; i++)
    {
        sum = sum + arr[i];

        if (sum == K)
        {
            maxLength = max(maxLength, i + 1);
        }

        long long remainder = sum - K;

        if (presumMap.find(remainder) != presumMap.end())
        {
            int maxL = i - presumMap[remainder];
            maxLength = max(maxLength, maxL);
        }

        // This is to not updating the sum if we found it
        if (presumMap.find(sum) == presumMap.end())
        {
            presumMap[sum] = i;
        }
    }

    return maxLength;
}
 */

/* Optimal Approach

TC. O(2n) because we're iterating through the array only twice with i & j increasing

*/
int LongestSubArraySum(int *arr, int arr_size, int K)
{
    long long sum = arr[0];
    int maxLength = 0;
    int i = 0, j = 0;

    while (j < arr_size)
    {

        j++;
        if (j < arr_size)
        {
            sum = sum + arr[j];
        }

        if (sum == K)
        {
            maxLength = max(maxLength, j - i + 1);
        }

        while (i <= j && sum > K)
        {
            sum = sum - arr[i];
            i++;
        }
    }

    return maxLength;
}

int main()
{

    int arr[] = {10, 5, 2, 6, 1, 1, 9};
    // int arr[] = {-1, 2, 3};
    int k = 15;

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int result = LongestSubArraySum(arr, arr_size, k);

    cout << " Max SubArray Sum length " << result;
}