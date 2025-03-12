#include<iostream>
using namespace std;

int SumUp(int num)
{
    int sum = 0;
    while(num > 0)
    {
        int rem = num % 10;
        sum += rem;
        num /= 10;
    }
    if(sum > 10)
    {
        return SumUp(sum);
    }
    return sum;
}

int main()
{
    int x = SumUp(38);
    cout << x;
    return 0;
}