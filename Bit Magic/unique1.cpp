// todo - in a collection where all the elements are persent twice , find the one that is present only once
#include<iostream>
using namespace std;



int findUnique(int arr[] , int n)
{
    int xorsum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}


int main()
{
    int arr[] = {4,1,2,1,2};
    cout<<findUnique(arr , 5);

    return 0;
}