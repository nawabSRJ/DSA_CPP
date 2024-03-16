// todo - count the number of ones in binary representation of a given number
#include<iostream>
using namespace std;
int count_ones(int n);
int main()

{
    int n;
    cout << "Enter number : " <<endl;
    cin >> n;
    int ans = count_ones(n);

    cout << "Number of Ones in Binary Representation : " << ans;
    return 0;
}

int count_ones(int n)
{
    int count = 0;
   if(n == 0) return 0;
   else{
        while(n)
        {
            n = n & (n-1);
            count++;
        }
   }
   return count;
}