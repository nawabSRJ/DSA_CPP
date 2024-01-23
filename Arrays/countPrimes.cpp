// ? With O(n) TC , count the number of prime numbers under a range denoted by n
#include<iostream>
#include<vector>
using namespace std;
int countPrime(int);
int main()
{
    int n;
    cout<<"Enter the range : "<<endl;
    cin>>n;
    int ans = countPrime(n);
    cout<<ans;
    return 0;
}
int countPrime(int n)
{
    int count = 0;
    vector <bool> prime(n+1 , true);
    prime[0] = prime[1] = false;

    for(int i = 2;i<n;i++)
    {
    if(prime[i]){
        count++;
        for(int j = 2 * i; j < n; j = j + i){
            prime[j] = 0;
        }
    }
    }
    return count;
}
// * Working !!