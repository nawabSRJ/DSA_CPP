// question - Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is a leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader.

#include<iostream>
using namespace std;

int main()
{
    int ans[3];    // using this because vectors or any other STL containers don't work on this machine 
    int arr[] = {16,17,4,3,5,2};
    int size = sizeof(arr)/sizeof(int);
    cout<<size;
    int largest = arr[size-1];
    int j = 0;
    ans[j] = largest;
    j++;
    for(int i = size-2 ; i >=0 ; i--)
    {
        if(arr[i] > largest){
            ans[j] = arr[i];
            largest = arr[i];
            j++;
        }

    }
    cout<<"\n";
    for(auto i : ans){
        cout<<i<<" ";
    }
    return 0;
}