// todo -  Find subarray with given sum in an array of non-negative integers
// ? source - https://www.geeksforgeeks.org/find-subarray-with-given-sum/
#include<iostream>
#include<vector>
using namespace std;

// * s - given sum(target)
vector<int> subWithGivenSum(int arr[] , int n , int s)
{
    vector<int> ans;
    int left = 0 , right = 0 , target = 0;
    int i = 0;
    while(i < n){
    while(right < n && target <= s){
        target += arr[right];
        right++;
    }
    cout << "first : " <<target <<endl;
    if(target == s){
            ans.push_back(left);
            ans.push_back(right-1);
            // Break to only return the first subarray found
            return ans;
        }
    while(target > s && left < n){
        target -= arr[left];
        left++;
        cout << "Second : " <<target <<endl;
        if(target == s){
            cout << "Inside : " <<target <<endl;
            ans.push_back(left);
            ans.push_back(right-1);
            return ans;
        }
    }
    }
    
    ans.push_back(-1);  // not found
    return ans;  
}


int main()
{
    int arr[] = {1 ,2 ,3, 7, 5};
    vector <int> ans = subWithGivenSum(  arr , 5 , 12);
    for(auto i : ans){
        cout <<i + 1<< " "; // for 1-based indexing
    }cout<<endl;
    return 0;
}