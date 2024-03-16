#include<iostream>
using namespace std;

int main()
{
    string a = "abc";
    string b = "abc";
    cout << (a == b) << endl;
    cout << (a.length() == b.length()) << endl;
    cout << a.size()<<" and then : "<<(a.size() == b.size()) << endl;
    return 0;
}