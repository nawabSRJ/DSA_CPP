#include<iostream>
using namespace std;
int sequence(int n);

int main()
{
    cout<<sequence(11);
    return 0;
}

int sequence(int n)
{
    long long m = 1000000000 + 7;
        long long sum = 0;
        long long pro = 1;
        int num = 1;
        
        // for(int i = 1; i<=n;i++){
        //     int j = 1;
        //     while(j <= i){
        //         pro *= num;
        //         num++;
        //         j++;
        //     }
        //     sum += pro;
        //     pro = 1;
        // }
        return (sum % m);
}