/*
1
2 3
3 4 5
4 5 6 7

* Tip : Row ka pehla number = row number
*/

#include<iostream>
using namespace std;

int main()
{
    int row = 4;

    for(int i = 1;i<=row;i++)
    {
       int num = i;
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