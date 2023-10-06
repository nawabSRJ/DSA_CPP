/*
AAA
BBB
CCC
*/

#include<iostream>
using namespace std;

int main()
{
    int row = 3;
    int col = 3;
    char ch = 'A';
    int c = 0;
    for(int i = 1;i<=row;i++)
    {
       for(int j = 1;j<=col;j++)
       {
            cout<<char(ch + i -1);
       }
       cout<<"\n";
    }    
}
