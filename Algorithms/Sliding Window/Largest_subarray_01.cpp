// * Largest subarray of 0's and 1's
// ? source : https://www.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1?page=1&category=sliding-window&sortBy=submissions

#include <iostream>
#include<unordered_map>
using namespace std;

int maxLen(int arr[], int N)
{
    int left = 0 , curr  = 0;
    int maxlen = 0;
    unordered_map<int , int> mp;
    for(int right = 0 ; right < N ; right++){
        curr += (arr[right] == 0) ? -1 : 1;
        if(curr == 0){
            
        }
    }
    

    return 0;
}

int main()
{
    int arr[] = {0,0,1,0,0};
    maxLen(arr , 5);
    return 0;
}