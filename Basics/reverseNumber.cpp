#include<iostream>
using namespace std;


int reverse(int n){
    int rev = 0;
    while(n > 0){
        int rem = n % 10;
        rev = (rev*10) + rem;
        n /= 10;
    }
    return rev;
}



int main()
{
    int n = 123400;     // removes trailing zeros as well
    cout << reverse(n);
    return 0;
}