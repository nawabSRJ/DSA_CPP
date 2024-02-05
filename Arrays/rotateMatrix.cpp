#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int> > matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int matrix[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int result[3][3];
    int n = 3;
    // cout << "here";
    for(int i = 0; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            result[j][i] = matrix[i][n - 1 - j];
        }
    }
    /*
    for(int i = 0 ; i < 3; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cout << result[i][j] <<" ";
        }
        cout << "\n";
    }*/

    for(int i = 0 ; i < 3; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cout << matrix[i][j] <<" ";
        }
        cout << "\n";

    return 0;
}