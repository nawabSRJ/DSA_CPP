// todo : Quick Sort
#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr, int low, int high){
    int pivot = arr[low];
    int i = low, j = high;
    
    while(i<j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        while(arr[j]>pivot && j >= low+1){
            j--;
        }
        if(i < j) {
            // swap (arr[i],arr[j])
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // putting the pivot at the right place
    // swap(arr[low],arr[j])
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j; // partition index
}

void QuickSort(vector<int>&arr, int low, int high){
    if(low<high){
        int pIndex = partition(arr,low,high);
        QuickSort(arr,low,pIndex-1);
        QuickSort(arr,pIndex+1,high);
    }
}



int main()
{
    vector<int> arr = {5, 23, 2, 99, 69};
    int n = 5;
    QuickSort(arr,0,n-1);
    // printing
    for(int i = 0; i < arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}