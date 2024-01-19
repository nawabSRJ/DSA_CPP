// ? Question - Given three arrays "sorted in increasing order". Find the elements that are common in all three arrays. Note: can you take care of the duplicates without using any additional Data Structure?
// todo - return an array containing the common element present in all the 3 arrays in "sorted order". If there are no such elements return an empty array. In this case the output will be printed as -1.
#include<iostream>
using namespace std;

int main()
{
    // for gfg return a vector
    int A[] = {1, 5, 10, 20, 40, 80}, n1 = 6;
    int B[] = {6, 7, 20, 80, 100},n2 = 5;
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120} , n3 = 8;
    int ans[2],p = 0;
    // * approach : 3-Pointer , one on each array
    int i = 0,j = 0,k = 0;
    // i = A[0] , j = B[0], k = C[0];

    while(i < n1 && j < n2 && k < n3){
        if(A[i] == B[j] && B[j] == C[k]){
            ans[p] = A[i];
            p++;
            i++;
            j++;
            k++;
        }
        else{
            if(A[i] < B[j] && A[i] < C[k]) {
                i++;
            }
            else if(B[j] < A[i] && B[j] < C[k]){
                j++;
            }
            else{
                k++;
            }
        } // outer else
    }

    for(auto i : ans){
        cout<<i<<" ";
    }
    return 0;
}
