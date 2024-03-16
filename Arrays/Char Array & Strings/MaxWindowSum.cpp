#include <iostream>
using namespace std;

int getMaxSum(int arr[], int size, int k) // Pass the size of the array as a parameter
{
    int maxSum = 0;

    for (int i = 0; i <= size - k; i++) // Use <= instead of <
    {
        int windowSum = 0;

        for (int j = i; j < i + k; j++)
        {
            windowSum += arr[j];
        }
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}

int main()
{
    int arr[] = {1, 9, -1, -2, 7, 3, -1, 2};
    int size = sizeof(arr) / sizeof(int); // Calculate the size of the array
    int k = 4;
    int maxSum = getMaxSum(arr, size, k); // Pass the size to the function

    cout << "Maximum sum of subarray of window " << k << ": " << maxSum << endl;

    return 0;
}
