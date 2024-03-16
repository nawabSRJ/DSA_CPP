// todo - make a simple class and create one getdata() and putdata() function
#include<iostream>
using namespace std;

class Myclass{

    public :
    int a , b;

    Myclass() // default constructor
    {
        a = 10;
        b = 20;
    }

    Myclass(int a , int b)
    {
        this->a = a;    // in C++ 'this' is a pointer
        this->b = b;
    }

    void show()
    {
        cout << "Value of a : "<< a <<endl;
        cout << "Value of b : "<< b <<endl;
    }
};

int main()
{
    Myclass obj;
    Myclass obj2(12,32);
    obj.show();
    obj2.show();
    return 0;
}