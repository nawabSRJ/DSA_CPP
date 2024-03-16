// todo - check if a number if power of 2
#include <iostream>
using namespace std;
bool generic_logic(int x);
bool bit_logic(int x);
int main()
{
    int n;
    cout << "enter a number : " << endl;
    cin >> n;
    // cout << (bool) 7 <<endl;
    bool ans = generic_logic(n);
    bool ans2 = bit_logic(n);
    cout << ans << endl;
    cout << ans2 << endl;
    return 0;
}

bool generic_logic(int x) // isPowerOfTwo
{
    if (x == 0)
    {
        return false;
    }
    else
    {
        while (x % 2 == 0)
        {
            x /= 2;
        }
        return (x == 1);
    }
}

// * info : Properties for numbers which are powers of 2, is that they have one and only one bit set in their binary representation. If the number is neither zero nor a power of two, it will have 1 in more than one place. So if x is a power of 2 then x & (x-1) will be 0.

bool bit_logic(int x)
{
    if (x == 0)
        return false;
    else
        return (!(x & (x - 1)));    
}