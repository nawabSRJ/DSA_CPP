// todo (4) - Find All Substrings with K Ones: Given a string containing only 0s and 1s and a fixed window size K, find all substrings of size K that contain exactly K ones.
#include<iostream>
using namespace std;

int totalKWindows(int arr[] , int k , int n){
    int count1 = 0 , total = 0;
    
    // create window
    int s = 0;
    for(int i = 0 ; i < k ; i++){
        s += arr[i];
    }
    if(s == k){
        total++;
    }

    // move window
    for(int i = k ; i < n; i++){
        s += arr[i];
        s -= arr[i-k];
        if(s == k){
            total++;
        }
    }

    return total;
}


int main()
{
    int n = 10, k = 2;
    int arr[n] ={1,0,0,1,1,0,0,1,1,1}; // total k windows of 1 : 3
    cout << totalKWindows(arr , k , n) <<endl;
    return 0;
}