/*
1 1 1
2 2 2
3 3 3
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
            cout<<i;
           j += 1;
        }
        cout<<endl;
        i += 1;
    }
}