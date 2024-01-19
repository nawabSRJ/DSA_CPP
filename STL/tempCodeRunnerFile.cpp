#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {1};

    v.push_back(1);
    cout<<v.capacity()<<endl;
    printf("\nHello\n");
         
    return 0;
}