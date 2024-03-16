// todo - playing with double pointers
#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    cout<<"value of *p : " << *p <<endl;   // 10
    cout << "address of a : " << &a <<endl;
    cout<<"value of *q : " << *q <<endl;   // address of a
    cout<<"value of **q : " << **q <<endl;    // 10
    return 0;
}