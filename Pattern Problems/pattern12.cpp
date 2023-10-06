/*
A B C
B C D
C D E
*/
#include<iostream>
using namespace std;

int main()
{
    int n = 3;
    for(int i=0;i<n;i++)
    {
        char ch = 'A';
        ch = ch + i;
        for(int j = 1;j<=n;j++)
        {
            cout<<char(ch);
            ch = ch + 1;
        }
        cout<<"\n";
    }
}