// todo - checking the sizes of different types of pointers
#include<iostream>
using namespace std;
int main()
{
    char ch = 'a';
    string name = "Srajan";
    int num = 12;

    char *chp = &ch;
    string *nm = &name;
    int *ptr = &num;

    cout<<sizeof(chp) <<endl;
    cout<<sizeof(nm) <<endl;
    cout<<sizeof(ptr) <<endl;
    return 0;
}