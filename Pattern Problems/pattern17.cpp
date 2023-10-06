/*
   *
  **
 ***
****
*/
#include<iostream>
using namespace std;

int main()
{
    int row = 4;
    for(int i = 1;i<=row;i++)
    {
        int sc = row - i;
        int j = 1;
        while(sc!=0)
        {
            cout<<" ";
            sc--;
            j++;
        }
        while(j<=row)
        {
            cout<<"*";
            j++;
        }
        cout<<"\n";
    }
}