#include<iostream>
#include<array>
#include<vector>
using namespace std;    // ! don't forget this line

int main()
{
    // * naive / basic way of creating an array
    int basic_array[3] = {1,2,3};
    
    // * STL Array :

    array<int , 4> a = {1,2,3,4};   // * <type , size> name(identifier)

    array<int,0> b; // * to keep the array empty you need to assign 0 in size arg
    
    int size = a.size();     // * gives the size of the array
    
    for(int i = 0 ;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    
    // * some other functions that can be perfromed , all of them are in O(1) tc
    cout<<"Element at 2nd Index ->"<<a.at(2)<<endl;

    cout<<"Array a Empty or not? ->"<<a.empty()<<endl; // * 0 -> False ; 1 -> True

    cout<<"Array b Empty or not? ->"<<b.empty()<<endl;

    cout<<"Array First Element ->"<<a.front()<<endl;

    cout<<"Array Last Element ->"<<a.back()<<endl;
    
    return 0;
}