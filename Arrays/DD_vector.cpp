#include <iostream>
#include <vector>

using namespace std;

// Function to insert elements into a two-dimensional vector
void insertElements(vector<vector<int>>& matrix, int n) {
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        vector<int> row;
        for (int j = 0; j < n; ++j) {
            int element;
            cin >> element;
            row.push_back(element);
        }
        matrix.push_back(row);
    }
}

// Function to insert elements into a two-dimensional vector (hard-coded)
// Function to insert elements into a two-dimensional vector (hard-coded)
void insertHardCoded(vector<vector<int>>& matrix, int n) {
    // Example values, you can modify these
    matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
}


// Function to print the elements of a matrix
void printMatrix(const vector<vector<int>>& matrix) {
    cout << "Matrix Elements:" << endl;
    for (const vector<int>& row : matrix) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    vector<vector<int>> matrix;

    // Uncomment one of the following options based on your preference:

    // Option 1: Insert elements by user
    insertElements(matrix, n);

    // Option 2: Insert elements using hard-coded values
    // insertHardCoded(matrix, n);

    // Print the matrix
    printMatrix(matrix);

    return 0;
}
