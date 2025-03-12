// todo - Find the smallest subarray with sum greater than a given value
// ? source - https://www.geeksforgeeks.org/minimum-length-subarray-sum-greater-given-value/
#include<iostream>
#include<vector>
using namespace std;

// * variable size window problem
int smallestSubarray(int arr[] , int n , int x)
{
    // * left and right pointers
    int left = 0 , right = 0 , minLen = n + 1; // setting the minLen to the max value initially
    int currSum = 0;
    while(right < n)
    {
        while(currSum <= x && right < n){
            currSum += arr[right];
            right++;
        }
        //  ? Why cannot update the minLen here?
        
        while(currSum > x && left < n){
            // update the minLen 
            if(right - left < minLen){
                minLen = right - left;
            }

            // remove from left and increase the left pointer
            currSum -= arr[left];
            left++;
        }
    }
    return minLen;
}

/* Driver program to test above function */
// O/p : 3 1 4
int main()
{
    int arr1[] = { 1, 4, 45, 6, 10, 19 };
    int x = 51;
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int res1 = smallestSubarray(arr1, n1, x);
    (res1 == n1 + 1) ? cout << "Not possible\n"
                     : cout << res1 << endl;
 
    int arr2[] = { 1, 10, 5, 2, 7 };
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    x = 9;
    int res2 = smallestSubarray(arr2, n2, x);
    (res2 == n2 + 1) ? cout << "Not possible\n"
                     : cout << res2 << endl;
 
    int arr3[] = { 1, 11, 100, 1, 0, 200, 3, 2, 1, 250 };
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    x = 280;
    int res3 = smallestSubarray(arr3, n3, x);
    (res3 == n3 + 1) ? cout << "Not possible\n"
                     : cout << res3 << endl;
 
    return 0;
}