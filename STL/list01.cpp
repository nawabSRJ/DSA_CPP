#include<iostream>
#include<list>
using namespace std;

// creating a function to print the elements of list

void showlist(list<int> g){
  list <int> :: iterator it;
  for(it = g.begin(); it != g.end(); ++it){
    cout<<*it<<" ";
  }cout<<"\n";
}

int main()
{
  list <int> l;
  l.push_back(10);
  l.push_back(20);
  l.push_front(5);

  showlist(l);

  // to copy elements of one list to another
  list <int> n(l);
  showlist(n);

  // to create a list of specified elements
  list <int> m(5,100);
  showlist(m);
  cout<<"Let's erase some elements of list m : \n";
  
  m.erase(m.begin() , m.end());
  showlist(m);
}