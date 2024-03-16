// * some examples for better clarity of pointers
#include<iostream>
using namespace std;

int main()
{

    /* CASE 1
    int num = 5;
    int a = num;
    a++;
    cout <<"value of num : "<< num <<endl;
    cout <<"value of a : "<< a <<endl;
    */

   /* CASE 2 ~ num will not get affected as a only stores the value at address pointed by p
   int num = 5;
   int *p = &num;
   int a = *p;
   a++;
   cout <<"Value of num :"<<num <<" same as *p : "<<*p<<endl;
   cout <<"Value of a : "<<a<<endl;
    return 0;
    */

   /* CASE 3 ~ value @ addr pointed by p is getting affected , hence :
   int num = 5;
   int *p = &num;
   cout <<"Initially : "<<num<<" *p :"<< *p <<endl; 
   (*p)++;
   cout <<"Value of num : "<<num <<" same as *p :"<<*p<<endl;
   */


    // todo - copy a pointer
    int num = 7;
    int *p = &num;

    int *q = p; // not value at p , just p which holds the address
    cout<<p <<" is same as "<<q<<endl;
    cout<<*p <<" is same as "<<*q<<endl;

    // modify any one
    (*p)++;
    cout<<"Later also "<<*p <<" is same as "<<*q<<endl;

}