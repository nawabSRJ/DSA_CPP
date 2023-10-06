/*
A B C
A B C
A B C
*/
#include<iostream>
using namespace std;

int main()
{
    int n = 3;
    for(int i = 1;i<=n;i++)
    {
        char ch = 'A';
        for(int j=1;j<=n;j++)
        {
            cout<<char(ch);
            ch = ch + 1;
        }
        cout<<"\n";
    }
}