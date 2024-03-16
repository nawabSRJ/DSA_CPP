#include<iostream>
#include<deque>
using namespace std;

// lets make a function print the deque
void showdq(deque <int> g)
{
  deque <int> :: iterator it;
  for(it = g.begin(); it != g.end(); ++it){
    cout<<"\t"<<*it;
  }
  cout<<"\n";
}

int main()
{
  deque <int> d;
  d.push_back(1);
  d.push_front(2);
  for(int i : d)
    {
      cout<<i<<" ";
    }
  cout<<"\n";
  d.pop_back();
  for(int i : d)
  {
    cout<<"After pop_back : "<<i<<endl;
  }

  d.push_back(3);
  cout<<"After push_back again : ";
  
  for(int i : d)
  {
    cout<<i<<" ";
  }

  d.pop_front();
  
  cout<<"\nAfter pop_front : ";
  for(int i : d)
  {
    cout<<i<<" ";
  }
  cout<<"\nSize of deque : "<<d.size()<<endl;
  cout<<"\nUsing the function :"<<endl;
  showdq(d);
}