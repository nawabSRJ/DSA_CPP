// todo : Merge Sort

#include<iostream>
#include<vector>
using namespace std;

// using a 2-pointer approach on the 2 sorted sub-arrays and making a combined sorted array
void merge(vector<int>&arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    
    while(left<=mid && right<=high){
        if(arr[left] <= arr[right]){
            // if the sorted left of the array element is lesser that the sorted right 
            temp.push_back(arr[left]);
            left++;
        }
        else{
            // sorted right array element is lesser
            temp.push_back(arr[right]);
            right++;
        }
    }
    // since the sub-arrays can be of unequal sizes , so adding the left over
    // either of the following 2 while loops will execute :
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    
    // ? why this?
    // now temp contains the sorted array
    for(int k = low; k <= high;k++){
        arr[k] = temp[k-low];   // why not temp[k]?? - gives garbage values why?
    }
}

void merge_sort(vector<int> &arr, int low, int high){
    if(low >= high) return;
    int mid = (low+high)/2;

    // divide(using recursion) : 
    merge_sort(arr,low,mid);    // left half
    merge_sort(arr,mid+1,high); // right half

    // merge : 
    merge(arr,low,mid,high);
}



int main()
{   
    vector<int> arr = {5, 23, 2, 99, 69};
    int n = 5;
    merge_sort(arr,0,n-1);
    // printing
    for(int i = 0; i < arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}