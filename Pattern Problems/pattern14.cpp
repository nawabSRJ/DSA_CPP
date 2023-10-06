/*
A
B C
D E F 
G H I J
*/
#include<iostream>
using namespace std;

int main()
{
    int row = 4;
    char ch = 'A';
    for(int i = 1;i<=row;i++)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<char(ch);
            j++;
            ch = ch + 1;
        }
        cout<<"\n";
    }
}
