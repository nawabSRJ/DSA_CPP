// todo - input a string -> capitalize it and add 2 in each character

#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    for(int i = 0; i < s.length(); i++){
        s[i] += 2;
    }
    cout<<s;

    
    return 0;
}