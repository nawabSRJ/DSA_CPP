// * Practice Problem 
// ? Two Sum : Given an array of integers, find two numbers such that they add up to a specific target number.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[] = {1,2,5,7};
    int N = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    vector <int> index;
    // int index[N];
    for(int i = 0;i<N;i++)
    {
        int elt = arr[i];
        for(int j = i;j<N;j++)
        {
            if(elt + arr[j] == target)
            {
                index.push_back(i);
                index.push_back(j);
            }
        }
    }   
   for(int i : index)
   {
        cout<<i<<" ";
   }
    return 0;
}

// ! Note -> This can be done way more efficiently with more knowledge of STL Containers