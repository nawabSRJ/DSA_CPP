// todo - understand how pointers work differently in case of char arrays & char data 
#include<iostream>
using namespace std;
int main()
{
    char ch[6] = "abcde";   // last char is by default '\0' or null character
    cout << ch <<endl;  // prints complete string 

    char *c = &ch[0];   
    cout << c << endl;  // prints complete string instead of address of ch

    // cout << "Using & : " << &ch <<endl;
    // cout << "Using & : " << &c <<endl;

    cout <<"First char : " << *c <<endl; // first character in string
    c++;     // increments the pointer location to next character in char array
    cout <<"Second char : " << *c <<endl;  
    cout << c <<endl;
    c++;
    cout << *c <<endl;  // prints 'c' (since it now points to it)

    // * important now
    cout << c <<endl;   // prints 'cde'
    // *Note : This states that pointer will print from where it points till where it finds a NULL character

// ----------------------------------------------------------------------

    char temp = 'z';
    char *ptr = &temp;

    cout << ptr <<endl;     // prints z followed by some undefined no. of characters until gets NULL character

    cout << *ptr <<endl; // prints z as usual
    
    return 0;
}