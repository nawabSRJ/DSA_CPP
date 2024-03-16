// todo - for a given number check if its i^th bit is set (that is 1) or not

// * note - in binary , indexing starts from 0 and that too from right for 6 (110) 0th bit -> 0 (not set) and 1st and 2nd bit -> 1 (set) ; if we represent it in 4-bit form , then 6(0110) which means 3rd bit -> 0 (not set)

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,i;
    cout << "Enter a number : " <<endl;
    cin >> n;
    cout << "Enter the bit to check : " <<endl;
    cin >> i;

    if(n & (1 << i)){
        cout << "Bit is set";
    }else{
        cout << "Not Set";
    }

    return 0;
}