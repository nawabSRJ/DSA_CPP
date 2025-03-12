// todo - to calculate the maximum sum of ‘k’ consecutive elements in the array.
// * Fixed Size Window 
#include<iostream>
using namespace std;

int maxSum(int arr[] ,int n ,int k)
{
    int maxSum = 0;
    
    if(n <= k){
        return -1;  // invalid window size
    }
    
    // make window
    int winSum = 0;
    for(int i = 0 ; i < k ; i++){
        winSum += arr[i]; 
    }
    // assume it as maxSum
    maxSum = winSum;             // starting loop from k ~ where we left while making window
    for(int i = k ; i < n ; i++){
        winSum += arr[i];
        winSum -= arr[i-k];
        maxSum = max(maxSum , winSum);
    }
    return maxSum;
}



int main()
{
    int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxSum(arr, n, k);
    return 0;
}