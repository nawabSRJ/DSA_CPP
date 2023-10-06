// Designated Initializer: This initializer is used when we want to initialize a range with the same value. This is used only with GCC compilers.
// [ first . . . last ] = value;
#include<iostream>
using namespace std;

int main()
{
    int nums[] = {[0 ... 10] = 1};
    cout<<nums;
}