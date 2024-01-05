// * Practice Problem 
// ? Find Duplicate and Unique elements in an array 
// !Not Yet Completed , its incorrect as of now
#include<iostream>
#include<vector>
using namespace std;

void duplicate(int arr[] , int N)
{
    vector <int> dup;
    bool flag = false;
    for(int i = 0;i<N;i++)
    {
        int elt = arr[i];
        for(int j = 0;j<N;j++)
        {
            if(arr[j] == elt)
            {
                flag = true;
                dup.push_back(elt);
            }
        }
    }
    if(flag)    
    {
        for(int i : dup)
            cout<<i<<" ";
    }
    else{
        cout<<"\nNo Duplicates"<<endl;
    }
}

void unique(int arr[] , int N)
{
    vector <int> uni;
    bool flag = true;
    bool found = false;
    for(int i = 0;i<N;i++)
    {
        int elt = arr[i];
        for(int j = 0;j<N;j++)
        {
            if(arr[j] == elt)
            {
                flag = false;
                // uni.push_back(elt);
            }
        }
        if(flag)
        {
            found = true;
            uni.push_back(elt);
        }
    }
    if(found)
    {
        for(int i : uni)
        {
            cout<<i<<" ";
        }
    }
    else{
        cout<<"\nNo Unique Element Found\n";
    }
}
int main()
{
    int arr[] = {1,3,5,2,3,7,11,5};
    int N = sizeof(N) / sizeof(arr[0]);

    duplicate(arr,N);
    unique(arr,N);
}