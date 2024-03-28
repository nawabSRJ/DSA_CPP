// todo - explore how pointers work with functions
#include<iostream>
using namespace std;

void show(int *p)
{
    cout <<"Address of variable (pointed by pointer) : "<< p << endl; // prints address
    cout <<"Content of variable : "<< *p << endl; // prints value
}
void update(int *p)
{
    //p += 1;   // this won't change the original main func pointer address
    // * Note : to change the value ~ use dereference operator(*)
    *p = *p + 2;
    cout << "Inside " << *p << endl;
}

int getSum(int arr[] , int n)
{
    int s = 0;
    for(int i = 0 ; i < n; i++)
    {
        s += i[arr];
    }
    return s;
}
int* prefixSum(int arr[] , int n)
{
    int start = 0;
    int *result = new int[n];
    for(int i = 0 ; i < n ; i++)
    {
        start += arr[i];
        result[i] = start;
        
    }
    return result;
}

// -----------------------------------------------------------------------------------

void showchars(char *ptr)
{
    cout << "Complete char array : " << ptr <<endl;
    cout << "First character : "<< *ptr << endl;
    ptr++;
    cout << "Second character : "<< *ptr << endl;
    
}



int main()
{
    int value = 7;
    //cout << &value <<endl;
    int *ptr = &value;
    //cout << "Before : " << ptr <<endl;
    //update(ptr);
    //cout << "After : " << ptr <<endl;
    //cout << "Value after updation : " << *ptr << endl;
    //show(ptr);  // don't use asterick (de-reference operator) while passing in function call

    int arr[5] = {1,2,3,4,5};
    // cout << "Sum of all elements is : " << getSum(arr  , 5) <<endl;
    // cout << "Sum of last 3 elements is : " << getSum(arr + 2 , 5-2) <<endl;

    cout <<"Prefix Sum array of arr is : "<<endl;
    int* prefix = prefixSum(arr , 5);
    for(int i = 0 ; i < 5 ; i++)
    {
        cout << prefix[i] << " ";
    }cout<<endl;

    

// ----------------------------------------------------------------------------

    char chr[7] = "abcdef";
    char *p = &chr[0];
    // showchars(p);

    return 0;
}