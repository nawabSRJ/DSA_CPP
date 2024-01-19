// question - Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

// * Pro Tip : Sum of Consecutive Numbers(till n) =  (n*(n+1))/2;
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int N = 10;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    
    // * actual sum 
    int act_sum = (N *(N+1)) / 2;
    int arr_sum = 0;
    for(int i = 0; i<N-1 ; i++)
    {
        arr_sum = arr_sum + arr[i];
    }
    cout<<act_sum - arr_sum;
    return 0;
}

