#include<iostream>
using namespace std;

int main()
{
    for(int i = 0 ; i < 6; i++)
    {
        cout << "Here i is = " << i << endl;
        while(i != 5){
            i++;
        }
        cout << "Here i is = " << i << endl;
    }
    return 0;
}