#include<iostream>
using namespace std;

int main()
{
    string a = "html";
    string b = "/html";
    if(b == '/' + a)
    {
        cout << "Yes" <<endl;
    }
    int n = 3;
    int ans = n / 2;
    cout << ans ;
    return 0;
}