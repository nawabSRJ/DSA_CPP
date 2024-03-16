#include<iostream>
#include<stack>
using namespace std;
// let's make a cool function to display and then pop the elements of the stack one by one

void ShowThrow(stack <string> s){
  while(!s.empty()){
    cout<<"Element at Top : "<<s.top()<<endl;
    s.pop();
  }
  cout<<"\n\nAll Elements removed\n";  
}


int main()
{
  stack <string> names;

  names.push("Srajan");
  names.push("Shivam");
  names.push("Aaditya");
  names.push("Stuti");  // last pushed ~ top

  cout<<"Top Element : "<<names.top()<<endl;
  cout<<"Current Size of Stack : "<<names.size()<<endl;
  cout<<"Popping out the top element : "<<names.top()<<endl;
  names.pop();
  cout<<"Top Element after popping : "<<names.top()<<endl;

  cout<<"Current Size of the stack : "<<names.size()<<endl;
  cout<<"Empty or not : "<<names.empty()<<endl;

  int c;
  cout<<"Do you want to make your stack empty?";
  cin>>c;
  if (c == 1){
    ShowThrow(names);
  }
  else {
    cout<<"Cool!! Thanks for using this program";
  }
  
  
}