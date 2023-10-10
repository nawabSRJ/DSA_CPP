// * Practice Problem 5
// ? Sub array with given sum : Given an unsorted array A of size N that contains only positive integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray. In case of multiple subarrays, return the subarray indexes which come first on moving from left to right.

// ? Note:- You have to return an Array List consisting of two elements left and right. In case no such subarray exists return an array consisting of element -1. 
// #include<iostream>
// #include<vector>
// using namespace std;

// void subarray(int arr[], int n , int s)
// {
//     int sum = 0, j = 0;
//     vector <int> ans;
//     int currentIndex = -1;
//     while(j<=n)
//     {
//         // * j stores the starting index
//         for(int i = j;i<n;i++)
//         {
//         currentIndex = i;
//         sum += arr[i];

//         if(sum == s)
//         {
//             ans.push_back(j + 1);
//             ans.push_back(currentIndex + 1);
//             cout <<"The Starting and Ending index of sub array with sum "<<s<<" is"<<endl;
//             for(int i : ans)
//             {
//                  cout <<i<<" ";
//             }
//             return; //stop further processing once a sub array is found
//          }
//         else if(sum > s)
//         {
//             sum = 0;
//             break;
//         }
//         }
//         j++;
//     }
// }
    

// int main()
// {
//     int A[] = {1,2,3,7,5};
//     int N = 5;
//     int S = 12;

//     subarray(A,N,S);
// }

// * --------------------- An Optimal and Better Way
#include<iostream>
#include<vector>
using namespace std;

void subarray(int arr[] , int n, int s)
{
    int start = 0;
    int last = n-1;
    int sum = 0;
    bool flag = false; // * to check if pair exists or not
    vector <int> ans;

    for(int i = 0;i<n;i++)
    {
        sum += arr[i];

        if(sum == s)
        {
            ans.push_back(start + 1);
            ans.push_back(last + 1);
            flag = true;
            break;
        }
        else if(sum>=s)
        {
            last = i;
            while(sum>s && start<last)
            {
                sum -= arr[start];
                ++start;
            }
        }
    }
    if(flag == false)
    {
        ans.push_back(-1);
    }
        
    for(int i : ans)  
    {
        cout << i <<" ";
    }
}
int main()
{
    int A[] = {1,2,3,7,5};
    int N = 5;
    int S = 12;

    subarray(A,N,S);
}