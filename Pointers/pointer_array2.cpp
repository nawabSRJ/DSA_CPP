// todo - using pointer with char arrays
#include<iostream>
using namespace std;

int main()
{
    char ch[6] = "abcde";
    cout << ch <<endl;  // will print the full content
    char *c = &ch[0];
    cout << c <<endl;
    cout << *c <<endl;


    c = c + 1;
    cout << c <<endl;
    cout << *c <<endl;



    // * De-referencing Operator can work in this way as well 
    
    string str[2] = {"abcd","efgh"};
    cout << str <<endl;
    cout << *str<<endl;
    
    int arr[2] = {12,17};
    cout << arr <<endl;
    cout << *arr <<endl;
    
    return 0;
}