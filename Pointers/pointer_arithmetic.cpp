#include<iostream>
using namespace std;

int main()
{
    int num = 5;
    int *p = &num;
    cout << *p <<endl;
    (*p)++;     // * to increment value pointed by p -> always use ()
    cout<< *p <<endl;
    *p = *p * 2;
    cout << *p <<endl;
    *p = *p / 3;
    cout << *p <<endl;

    return 0;
}