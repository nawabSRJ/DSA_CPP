// to print the minimum and maximum element of an array
#include<iostream>
using namespace std;

int getMax(int arr[], int n)
{
    int max = INT_MIN;
    for(int i = 0;i<n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int getMin(int arr[], int n)
{
    int min = INT_MAX;
    for(int i = 0;i<n;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cin>>size;

    int arr[100];   // ! bad practice to put a var. in array size like arr[size]

    for(int i = 0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"The maximum element of the array is : "<<getMax(arr,size) <<endl;
    cout<<"The minimum element of the array is : "<<getMin(arr,size) <<endl;

}