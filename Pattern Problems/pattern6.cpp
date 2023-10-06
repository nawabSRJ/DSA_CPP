/*
1
2 3
4 5 6
7 8 9 10
*/

#include<iostream>
using namespace std;

int main()
{
    int row = 4;
    int num = 1;
    for(int i = 1;i<=row;i++)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<" "<<num;
            num++;
            j++;
        }
        cout<<"\n";
        
    }
}