// todo - take a number input from user and display its binary value
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


int main()
{
    int n;
    cout << "Enter a number : " <<endl;
    cin >> n;

    // cout << "Binary form of "<<n<<" : "<< decimalToBinary(n);
    string num = decimalToBinary(n);
    

    return 0;
}