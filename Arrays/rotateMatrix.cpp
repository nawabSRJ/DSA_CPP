#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix;
    matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<vector<int>> result;
    vector<vector<int>> second;
    //  int matrix[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    //  int result[3][3];
    int n = 3;
    //  cout << "here";
    // for(int i = 0; i < 3 ; i++)
    // {
    //     for(int j = 0 ; j < 3 ; j++)
    //     {
    //         result[j][i] = matrix[i][n - 1 - j]; // * working ~ column bana rahe hai
            
    //     }
    // }
    
    // for(int i = 0 ; i < 3; i++)
    // {
    //     for(int j = 0 ; j < 3 ; j++)
    //     {
    //         cout << result[i][j] <<" ";
    //     }
    //     cout << "\n";
    // }
    cout<<"\n\n";
    cout<<"From vector : \n\n";
    cout << matrix.size()<<endl;
     // --------------------------------------Vector se kia hai : -------------------------
    for(int i = matrix.size() - 1; i >= 0 ; i--)
    {
        vector <int> row;
        for(int j = 0 ; j < 3 ; j++)
        {
            int elt;
            // elt = matrix[i][n - 1 - j];
            elt = matrix[j][i];
            row.push_back(elt);
        }
        result.push_back(row);
    }
    second = result;
    for (const vector<int>& row : second) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
    // ----------------------------------------------------------------------------------------
    

    return 0;
}
