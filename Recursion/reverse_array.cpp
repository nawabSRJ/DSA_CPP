// todo - reverse an array using recursion
#include<iostream>
using namespace std;

void printArray(int arr[]){
    for(int i = 0 ; i < 5; i++){
        cout<<arr[i]<<" ";
    }
}


// reversing in-place (won't make a copy)
void reverseArray(int arr[] , int start , int end){

    // base case
    if(start >= end) {
        printArray(arr);
        return;
    }

    //  swapping in-place using xor operation
    arr[start] = arr[start] ^ arr[end];
    arr[end] = arr[start] ^ arr[end];
    arr[start] = arr[start] ^ arr[end];

    reverseArray(arr , start+1 , end-1);
}


int main()
{
    int arr[5] = {1,2,3,4,5};
    reverseArray(arr , 0 , 4);
    return 0;
}