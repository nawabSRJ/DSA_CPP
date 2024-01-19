// ? Question - Find the second largest element in an array
#include<iostream>
using namespace std;

int main(){
    int arr[] = {269, 269, 269, 269, 269, 269, 269, 183};
    int n = sizeof(arr)/sizeof(int);
    int largest = arr[0];
    int secondLargest = INT_MIN;

    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    cout << secondLargest;

    return 0;
}
