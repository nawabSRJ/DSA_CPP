#include<iostream>
using namespace std;

void update(int *p){
    *p += 2;
}
void update2(int &p){
    cout<<"inside update 2 : "<<p<<endl;
    p+=2;
}

int main()
{
    int value = 5;
    int *ptr = &value;
    update(ptr);
    cout << *ptr <<endl;
    update2(value);
    cout<<value <<endl;
    cout<< *ptr <<endl;
    return 0;

}