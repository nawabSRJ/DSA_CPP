/*
123
123
123
*/
#include<iostream>
using namespace std;

int main()
{
    int n = 3;
    int i = 1;
    int j;
    while(i <= n)
    {
        j = 1;
        while(j<=n)
        {
            cout<<j;
           j += 1;
        }
        cout<<endl;
        i += 1;
    }
}