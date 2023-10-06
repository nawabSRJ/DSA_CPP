/*
D
C D 
B C D
A B C D
*/
#include<iostream>
using namespace std;

int main()
{
    int row = 4;    // *row num = col num
    for(int i = 1;i<=row;i++)
    {
        char ch = 'A';
        int j = 1;
        while(j<=i)
        {
            cout<<char(ch + row - i);       
            ch = ch + 1;
            j++;
        }
        cout<<"\n";
    }

}