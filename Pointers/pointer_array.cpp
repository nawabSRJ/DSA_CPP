#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {21,42,35,67,92,72};
    cout << "\n\nHolds the address of the first element (0th index) : " <<arr<<endl;
    cout << "Address of 0th index of arr : " << &arr[0]<<endl;

    cout << "Value at 0th index : " << *arr <<endl;
    cout << "Value at 0th index + 1: " << *arr + 1 <<endl;
    
    cout << "Value at (0th + 1) index : " << *(arr + 1) <<endl;

    // *| formula arr[i] = *(arr + i)        , also :
    // *| i[arr] = *(i + arr)

    cout << 3[arr] <<endl;

    int arr2[10] = {1,12,3,4};

    int *ptr = &arr2[0];
    cout << "First : "<<ptr<<endl;
    cout << "Second : "<<*ptr<<endl;
    ptr = ptr + 1;                      // in case of array , it will point to next index
    cout << "Third : "<<ptr<<endl;
    cout << "Fourth : "<<*ptr<<endl;

    int n = 12;
    int *pt = &n;
    cout << "pt = "<<pt<<endl;
    cout << "*pt = "<<*pt<<endl;
    pt = pt + 5;
    cout << "pt = "<<pt<<endl;
    cout << "*pt = "<<*pt<<endl;    // this will output some garbage value

    
    return 0;
}