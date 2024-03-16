// todo - explore Double Dimensional Vector
#include <iostream>
#include <vector>

using namespace std;

// Function to add elements of two 2-dimensional vectors
vector<vector<int>> addVectors(const vector<vector<int>>& v1, const vector<vector<int>>& v2) {
    vector<vector<int>> result;

    // Assuming both vectors have the same dimensions
    int rows = v1.size();
    int cols = v1[0].size();

    // Resize the result vector to match the dimensions
    result.resize(rows, vector<int>(cols));

    // Add corresponding elements
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = v1[i][j] + v2[i][j];
        }
    }

    return result;
}

int main() {
    // Create a 2-dimensional vector
    vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Traverse the vector and print its elements
    cout << "2-dimensional vector elements:" << endl;
    for (const auto& row : vec) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    // Example of adding two vectors
    vector<vector<int>> vec1 = {{1, 2}, {3, 4}};
    vector<vector<int>> vec2 = {{5, 6}, {7, 8}};
    vector<vector<int>> sum = addVectors(vec1, vec2);

    // Print the result of adding two vectors
    cout << "\nSum of vectors:" << endl;
    for (const auto& row : sum) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
