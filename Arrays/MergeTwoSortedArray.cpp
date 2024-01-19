// ? Question : Given two sorted arrays , merge them into one combined array which is also in sorted form
#include<iostream>
using namespace std;
void mergeArray(int arr1[] , int arr2[] , int n1, int n2);
int main()
{
    int arr1[] = {1,3,5,7,9};
    int arr2[] = {2,4,6};
    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);

    mergeArray(arr1 , arr2 , n1 , n2);
    
    return 0;
}

void mergeArray(int arr1[] , int arr2[] , int n1, int n2){
    int i=0,j=0,k=0;
    int ans[n1+n2];
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            ans[k] = arr1[i];
            k++;
            i++;
        }else {
            ans[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i < n1){
        ans[k] = arr1[i];
        i++;
        k++;
    }
    while(j < n2){
        ans[k] = arr2[j];
        j++;
        k++;
    }

    cout<<"After Merging the arrays : "<<endl;
    for(auto i : ans){
        cout<<i<<" ";
    }cout<<endl;
}