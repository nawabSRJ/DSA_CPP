/*
*
**
***
****
*/

#include<iostream>
using namespace std;

int main()
{
    int row = 4;
    // int col = 4;

    for(int i = 1 ; i <= row ; i++)
    {
        int j = 1;
        while(j<=i)
        {
           cout<<"*";
           j++;
        }
        cout<<"\n";
    }
}