// given an array , print all the subsequences (Power Set) using recursion
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSubsequences(int ind , vector<int> &ds,int arr[] , int n){
    
    // base condition 
    if(ind == n){
        // print
        for(auto it : ds){
            cout << it <<" ";
        }
        // for empty set :
        if(ds.size() == 0){
            cout<<"{}";
        }
        cout<<"\n";
        return;
    }

    
    ds.push_back(arr[ind]);  // take condition , pick it
    printSubsequences(ind + 1 , ds , arr, n);
    ds.pop_back();  // not pick , just remove what you picked for this condition

    printSubsequences(ind+1 , ds , arr, n);
}

int main()
{
    vector<int> ds;
    int arr[] = {3,1,2}; 
    int n = 3; // size of arr
    printSubsequences(0,ds,arr,n);
    return 0;
}