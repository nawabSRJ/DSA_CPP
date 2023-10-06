/*
123
456
789
*/

#include<iostream>
using namespace std;

int main()
{
    int limit = 9;
    int i;
    for(i=1;i<=limit;i++)
    {
        if(i % 3 == 1)
        {
            cout<<"\n"<<i;
        }
        else
        {
             cout<<i;
        }
    }
}