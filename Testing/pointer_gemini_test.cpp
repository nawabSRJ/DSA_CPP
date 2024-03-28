#include <iostream>
#include <vector> // Using vector for dynamic memory allocation

using namespace std;

// Function to calculate prefix sum of an array using pointers, returning the prefix sum array
int* prefixSum(int arr[], int n) {
    int* prefix_sum = new int[n]; // Allocate memory for prefix sum on the heap

    prefix_sum[0] = arr[0]; // Initialize first element with first array element

    // Efficiently calculate prefix sum using pointers
    for (int i = 1; i < n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }

    return prefix_sum; // Return the prefix sum array pointer
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int* prefix_sum = prefixSum(arr, n); // Call prefixSum and store returned pointer

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Prefix sum array: ";
    for (int i = 0; i < n; i++) {
        cout << prefix_sum[i] << " ";
    }
    cout << endl;

    // Deallocate memory for prefix_sum array (responsibility of the caller)
    delete[] prefix_sum;

    return 0;
}
