/*
***
***
***
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 3;

    int i=1;    // * for row
    int j;      // * for column

    while(i<=n)
    {
        j = 1;
        while(j<=n)
        {
            cout<<"*";
            j += 1;
        }
        cout<<endl;
        i += 1;
    }    
}