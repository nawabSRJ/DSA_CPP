// Todo - Exploring all the in-built string functions
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    // Append function
    string first_name = "Srajan";
    string last_name = " Saxena";
    string full_name = first_name.append(last_name);
    cout << full_name << endl;
    
   
   string newstr = "Srajan";
   cout << "New Str ki length : "<<newstr.length();

    
    return 0;
}