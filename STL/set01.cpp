#include<iostream>
#include<set>
using namespace std;

int main()
{
  set <int> s;  // stores unique elements
  s.insert(5);  
  s.insert(5);
  s.insert(5);
  
  s.insert(1);  // O(log n) TC for insert opr.
  s.insert(1);
  
  s.insert(6);
  s.insert(6);
  s.insert(6);
  
  s.insert(0);
  s.insert(0);

  for(auto i : s){
    cout<<i<<endl;
  }cout<<"\n";
    cout <<"Size of set = "<<s.size()<<endl;
  cout<<"5 is present or not? -> "<<s.count(5)<<endl;

  // using find function to get a reference of a value present in set

  set <int> :: iterator itr = s.find(5);
  cout<<"5 is present at -> "<<*itr<<endl;
  cout<<*itr<<endl;
  for(auto it = itr; it != s.end();it++)
    {
      cout<<*it<<" ";
    }cout<<endl;

  // using erase function to remove elements
  set <int> :: iterator it = s.begin();
  it++;

  s.erase(it);
  cout<<"\nAfter erasing 1st index element : "<<endl;
  for(auto i : s){
    cout<<i<<endl;
  }cout<<endl;
}