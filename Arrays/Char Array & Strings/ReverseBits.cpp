// ? source : https://www.geeksforgeeks.org/problems/reverse-bits3556/1
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    // Iterate through the binary string from right to left
    for (int i = binary.length() - 1; i >= 0; --i) {
        // Convert character '0' or '1' to integer 0 or 1
        int digit = binary[i] - '0';
        // Add the contribution of this bit to the decimal value
        decimal += digit * pow(2, power);
        // Increment the power of 2
        ++power;
    }
    return decimal;
}

string decimalToBinary(int n)
{
    string binary = "";
    while(n > 0)
    {
        int rem = n % 2; // remainder
        binary = to_string(rem) + binary;

        // divide the number by 2
        n /= 2;

    }
    return binary;
}
string reverse(string num)
{
    if(num.length() < 32){
        do{
            num = '0' + num;
        }while(num.length() < 32);
    }
    // reverse
    cout <<"here : " <<num <<endl;
    string rev = "";
    for(int i = num.length() - 1; i >= 0 ; i--)
    {
        rev += num[i];
    }

    // cout <<"reverse 32-bit number is : " <<rev <<endl;
    return rev;
}

int main()
{
    int n;
    // cout << "Enter a number : "<<endl;
    // cin>>n;

    string num = decimalToBinary(n);
    string rev = reverse(num);
    int ans = rev;


    cout << ans <<endl;
    return 0;
}
