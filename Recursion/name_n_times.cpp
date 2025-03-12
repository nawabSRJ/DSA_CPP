// todo - print your name n times using recursion
#include<iostream>
using namespace std;

void print(int i , int n){
    if(i > n) return;
    cout<<"SRJ" <<endl;
    print(i+1 , n); // * when we can't use a counter , we pass args in the recursive function call
}

int main()
{
    int n;
    cout <<"Enter how many times?"<<endl;
    cin>>n;
    print(1 , n);
    return 0;
}