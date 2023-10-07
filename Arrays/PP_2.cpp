// Practice Problem 2
// ? Rotate an Array: Implement a function to rotate an array to the right by k steps. For example, given [1, 2, 3, 4, 5, 6] and k = 2, the array should become [5, 6, 1, 2, 3, 4].

// ! 1 Shortcoming : this code will not work if the rotation steps are greater than size of the array
#include<iostream>
using namespace std;
void printArray(int a[] , int n)
{
     for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void rotateArray(int arr[] , int k, int n)
{
    // int size = 6;
    int lastK[n];
    int j = 0;
    for(int i = n-k;i<n;i++)
    {
        lastK[j] = arr[i];      // * copying last K elements in other array
        j++;
    }
    // printArray(lastK,2);
// !here j = 0;

    // * reverse pass 
    for(int i = 0;i<n-k;i++)
    {
        lastK[j] = arr[i];      // * lastK is the answer and hence we'll copy it
        j++;
    }
    printArray(lastK,n);
    for(int i = 0;i<n;i++)
    {
        arr[i] = lastK[i];      // * putting copied elements
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int N = sizeof(arr)/sizeof(arr[0]);
    int steps;
    cout << "Enter the number of steps to rotate"<<endl;
    cin>>steps;
    rotateArray(arr,steps , N);
    // cout<<"Array after rotation : \n";

    cout<<"\nAfter Rotation : \n";
    for(int i = 0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }   
}