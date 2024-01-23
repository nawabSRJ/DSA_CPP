// ? Sum of Array except self
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4};
    int n = sizeof(arr) / sizeof(int);
    int arrSum = 0;
    for(int i = 0;i<n;i++){
        arrSum += arr[i];
    }
    int ans[n];
    for(int i = 0;i<n;i++){
        ans[i] = arrSum - arr[i];
    }
    cout<<"Sum of Array except self : "<<endl;
    for(auto i : ans){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}