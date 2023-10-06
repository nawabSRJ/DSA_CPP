// An anomaly in CPP or a feature - for you to decide
// ? When playing with the value of a variable(not array) in some func. tha value in the main func will not get changed but the same will not happen with the array
#include<iostream>
using namespace std;

void modifyVar(int num)
{
    cout<<"Inside Function" <<endl;
    num = num + 2;  // * value updated
    cout << num <<endl;
    cout<<"Going Back to Main " <<endl;
}
void modifyArray(int arr[])
{
    cout <<"Inside Function" <<endl;
    arr[0] = 120;   // * changing the value at the 0th index
     for(int i = 0;i<3;i++)
    {
        cout <<arr[i] <<" ";
    }
     cout<<"Going Back to Main " <<endl;
}
int main()
{
    int num = 5;    // * original value
    modifyVar(num);

    cout<<"Value of num : " <<num <<endl;   

    int arr[3] = {1,2,3};   // * original array
    modifyArray(arr);

    cout<<endl<<endl;
    cout<<"Values in the Array : " << endl;
    for(int i = 0;i<3;i++)
    {
        cout <<arr[i] << " ";
    }
}

// * The Reason for this is that when an array is passed in the func. call like this :
// *  modifyArray(arr); -> here we are specifying the base address of the array as we know that arr holds the base address or the address of the 0th index of the array and further elements are accessed so on , But when specify a non-array entity like a number or a character then a COPY of it is made and then modification happens in the function.