// hashing technique implemented using an array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];

    // take input for array elements
    cout <<"Enter elements of the array : "<<endl;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }

    // pre-compute
    int hashArr[13] = {0};  // assuming that hash array can have max element = 12 
    for(int i = 0; i < n;i++){
        hashArr[arr[i]] += 1;
    }

    cout << "Enter number to search in hash array : "<<endl;
    int q;
    cin >>q;
    cout<<"Entered number appears : " <<hashArr[q]<<" times"<<endl;



    return 0;
}