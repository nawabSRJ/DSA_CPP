// todo : Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements. Note that you must do this in-place without making a copy of the array.
#include<iostream>
#include<vector>
using namespace std;

void moveZeros(vector<int>&arr){
    int p = 0;
    for(int i = 0 ; i < arr.size(); i++){
        if(arr[i] != 0){
            // swap
            int temp = arr[i];
            arr[i] = arr[p];
            arr[p] = temp;
            p++;
        }
    }
    
}

int main()
{
    vector<int> arr = {0,1,0,3,12};
    moveZeros(arr);
    for(int i = 0; i < arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}