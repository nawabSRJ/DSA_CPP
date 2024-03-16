// todo - implement a pre-fix sum logic 
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {6,3,-2,4,-1,0,-5};
    int size = sizeof(arr) / sizeof(int);
    int psum[size]; // the pre-fix sum arraym of arr

    psum[0] = arr[0];
    for(int i = 1; i < size; i++)
    {
        psum[i] = psum[i-1] + arr[i]; 
    }
    cout <<"Prefix-Sum Array : \n";
    for(int i = 0 ; i < size; i++)
    {
        cout << psum[i] <<" ";
    }
    return 0;
}