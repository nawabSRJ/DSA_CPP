// * Practice Problem 8
// ? Swap Alternatives :
#include <iostream>
using namespace std;

void swapAlt(int arr[], int n) // * only working for even sized array
{
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i += 2)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    else
    {
        {
            for (int i = 0; i < n - 1; i += 2)
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int N = sizeof(arr) / sizeof(arr[0]);
    swapAlt(arr, N);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}