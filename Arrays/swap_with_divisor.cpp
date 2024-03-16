// * source : https://codeforces.com/contest/1937/problem/A
// ! imp -> swap(k) with indexOf(largestDivisor(k))
// ! index is 1-based
// todo - return index of 1 at last

#include<iostream>
using namespace std;

// utility func
int largestDivisor(int num) {
    int largest = 1;     
    // max till num/2 only
    
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            largest = i; 
            
        }
    }
    // cout <<"divisor = "<<largest<<endl;
    return largest;
}


int indexOfOne(int arr[] , int n)
{
    for(int i = 1; i < n; i++)
    {
        int replace =  largestDivisor(i+1); // since indexing is 1-based
        swap(arr[i] , arr[replace-1]);  
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }cout<<endl;
    // find index of 1
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == 1) return i+1;

    }
    return -1;  // not found
}



int main()
{
    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(int);
    cout << indexOfOne(arr , size);
    return 0;
}