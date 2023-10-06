/*
A
B C
C D E
D E F G
*/
#include<iostream>
using namespace std;

int main()
{
    int row = 4;
    for(int i=0;i<row;i++)
    {
        char ch = 'A';
        int j = 0;
        ch = ch + i;
        while(j<=i)
        {
            cout<<char(ch);
            j++;
            ch = ch + 1;
        }
        cout<<"\n";
    }
}