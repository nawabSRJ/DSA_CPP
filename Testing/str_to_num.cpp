// todo : inorder to solve the problems where numbers are actually passed as string or we may need to traverse them like string in that case this would be helpful
#include<iostream>
using namespace std;
int main()
{
    string num = "1235813";
    for(int i = 0 ; i < num.length() ; i++)
    {
        cout << num[i] - '0' <<endl;
    }
    string check = "13";
    string n = "13";
    if(n == check)
    {
        cout << "yes";
    }
    return 0;
}