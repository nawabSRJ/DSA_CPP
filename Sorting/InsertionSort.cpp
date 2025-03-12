// todo : Insertion Sort
// ? idea : start with the 2nd element (index = 1) and iterate through each element, comparing it with the elements to its left, until it is in its correct sorted position.

#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    // printing
    cout<<"here";
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
    insertion_sort(arr, n);
    return 0;
}