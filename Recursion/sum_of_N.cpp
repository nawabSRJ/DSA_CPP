// todo - sum of first n numbers using recursion
#include<iostream>
using namespace std;

void sumOfN(int n , int s){
    if(n < 1) {cout<<s; return;}
    s += n;
    n--;
    sumOfN(n , s);
}

int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int s = 0;
    sumOfN(n , s);
    return 0;
}