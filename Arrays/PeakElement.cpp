// ? Question : Peak Element : An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists). Given an array arr[] of size N, Return the index of any one of its peak elements. 
// * Note: The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0. Also, arr[] will be in ascending order before the peak element, and in descending order after that.

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {856, 404, 278};
    int n = 3,found = -1,i=1;
    if(arr[n-1] > arr[n-2]){
        cout<<"Peak Element is "<<arr[n-1]<<" at index "<<n-1<<endl;
        exit(0);
    }
    for(int i = 0 ; i < n;i++)
    {
        if(arr[i] <= arr[i+1] && arr[i+1] >= arr[i+2]){
            found = i+1;
            break;
        }
    }
    // while(i < n-1){
    //     if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
    //         found = i;
    //         break;
    //     }
    //     i++;
    // }
    cout<<found<<endl;
    if(found == -1) {cout<<"No Peak Element";}
    else{ cout<<"Peak Element is "<<arr[found]<<" at index "<<found<<endl;}
    return 0;
}