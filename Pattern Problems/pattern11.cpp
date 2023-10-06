/*
A B C
D E F 
G H I
*/
#include<iostream>
using namespace std;

int main()
{
    int n = 3;      // * row and column count
    int ch = 'A';
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            cout<<char(ch);
            ch = ch + 1;
        }
        cout<<"\n";
    }
}