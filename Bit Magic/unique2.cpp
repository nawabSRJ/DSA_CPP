// todo - in a collection where all the elements are persent twice , find two elements that are present only once
#include<iostream>
using namespace std;

bool GetBit(int n , int pos)
{
    return ((n & (1<<pos)) != 0);
}

void Unique(int arr[] , int n)
{
    // * first calculate xorsum
    int xorsum = 0;
    for(int i = 0 ; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    // * get the right most setBit of xorsum
    int setbit = 0 , pos = 0;
    while(setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    // * calculate xorsum of the elements whose setBit is at the same place
    int newxor = 0;
    for(int i = 0 ; i < n; i++)
    {
        if(GetBit(arr[i] , pos-1))
        {
            newxor = newxor ^ arr[i];
        }
    }

    cout<<"First Unique Number : \t"<<newxor << endl;
    cout<<"Second Unique Number : \t"<<(tempxor ^ newxor)<< endl;
}



int main()
{
    int arr[] = {1,2,3,1,2,3,5,7};
    Unique(arr , 8);
    return 0;
}
