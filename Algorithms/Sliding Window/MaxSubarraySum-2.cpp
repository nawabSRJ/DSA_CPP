// ? SOURCE : https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/ 
// * In short : Max subarray sum problem with extra condition of distinct elements in subarray
#include<iostream>
using namespace std;


int maxSubarraySum(int arr[] , int k , int n){
    int maxSum, currSum = 0;
    // make window
    for(int i = 0; i < k;i++){
        currSum += arr[i];
    }
    maxSum = currSum;   // assume

    // moving forward
    for(int i = k ; i < n; i++){
        currSum += arr[i];
        currSum -= arr[i-k];
        maxSum = max(currSum , maxSum);
    }

}

int main()
{
    return 0;
}