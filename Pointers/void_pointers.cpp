// todo - demonstrate void pointers
#include<iostream>
using namespace std;

int main()
{
    void *ptr;
    int i = 10;
    cout << ptr <<endl;
    // cout << *ptr <<endl; this won't work for void pointers
    ptr = &i;
    cout << ptr <<endl;
    // cout << *ptr;
    return 0;
}