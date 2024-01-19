#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4};
    int s = 0;
    for(auto i : arr){
        s = s + i;
    }
    cout<<s;
    return 0;
}