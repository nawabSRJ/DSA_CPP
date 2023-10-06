/*
A
B B
C C C
D D D D
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
        }
        cout<<"\n";
        ch = ch + 1;
    }
}