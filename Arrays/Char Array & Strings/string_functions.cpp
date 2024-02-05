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
    
    // length & size function
    string s = "abc";
    cout << s.length() << endl;
    cout << s.size() << endl;
    
    /* strcpy function ~ strcpy(destination , source)
    string s2 = "something";
    strcpy(s2 , s);
    cout <<"New undefined string , after copy : " <<s2 << endl;
    */
    string s = "hello";
    string s2 = "th";
    s2 = s;     // just use assignment operator to copy one string to another
    cout << s2;
    /* strcmp function
    string first = "hello world";
    string second = "hello world";
    int ans = strcmp(first , second);
    cout << ans << endl;
    */
    
    return 0;
}