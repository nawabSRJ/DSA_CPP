// * Practice Problem 1
// ? Reverse an Array: Write a C++ function to reverse the elements of an array. Try to do it in-place.

#include<iostream>
using namespace std;
void printArray(int a[] , int size)
{
    cout<<"\n";
    for(int i=0;i<size;i++)
    {
        cout <<a[i] <<" ";
    }
}

void revArray(int arr[],int size)
{
    int start = 0;
    int end = size - 1;
    while(start <= end)
    {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    cout <<"\nReversing...\n";
    revArray(arr,7);
    cout <<"Reversing Done!!!\n";

    cout <<"\nArray after reversal : \n";
    printArray(arr,7);
}