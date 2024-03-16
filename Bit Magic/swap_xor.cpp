// todo - swap the values of two variables using xor
#include<iostream>
using namespace std;

int main()
{
    int a = 5, b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a <<" "<<b;
    return 0;
}