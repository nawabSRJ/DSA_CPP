/*I
1
2 1
3 2 1
4 3 2 1
*/
#include<iostream>
using namespace std;

int main()
{
    int row = 15;
    for(int i = 1;i<=row;i++)
    {
        int num = i;
        int j = 0;
        while(j != i)
        {
            cout<<" "<<num;
            num--;
            j++;
        }
        cout<<"\n";
    }
}