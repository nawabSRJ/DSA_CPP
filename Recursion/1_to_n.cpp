// todo - print numbers 1 to N using recursion
#include<iostream>
using namespace std;

void OneToN(int i , int n){
    if(i>n) return;
    cout << i <<endl;
    OneToN(i+1 , n);
}

void NtoOne(int n){
    if(n < 1) return;
    cout << n <<" ";
    n--;
    NtoOne(n);
}


int main()
{
    int n;
    // cout << "Enter how many times?"<<endl;
    // cin >> n;
    // OneToN(1 , n);
    NtoOne(7);
    return 0;
}