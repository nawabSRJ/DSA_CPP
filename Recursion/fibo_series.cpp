#include<iostream>
using namespace std;

int fibonacci(int N){

    // base condition
    if(N <= 1){
        return N;
    }
    
    int last = fibonacci(N-1);
    int slast = fibonacci(N-2);
    return last + slast;    // fibonacci logic
}

int main()
{
    cout<<fibonacci(7); // * working properly
    return 0;
}

// explanation : Nth fibonacci number can be written as a sum of (N-1)th & (N-2)th fibonacci number.
