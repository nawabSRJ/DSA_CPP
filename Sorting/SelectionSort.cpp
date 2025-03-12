// todo : Selection Sort
// ? article : https://takeuforward.org/sorting/selection-sort-algorithm/

#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        // found the smallest in the unsorted -> now swap
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

    // printing
    cout << "After selection sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int arr[5] = {5, 23, 2, 99, 69};
    int n = 5;
    selectionSort(arr, n);
    return 0;
}