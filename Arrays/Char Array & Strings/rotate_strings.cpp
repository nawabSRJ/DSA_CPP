#include<iostream>
using namespace std;

int main()
{
    string str1 = "amazon";
    string left , right;
    // Todo - rotation by 2 places
    for(int i = 0; i < str1.length(); i++){
            left += str1[(i+2) % str1.length()];
            right += str1[(i - 2 + str1.length()) % str1.length()];
        }
    
    cout << left << endl;
    cout << right;
    return 0;
}