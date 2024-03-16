#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue <string> q;
  q.push("Srajan"); 
  q.push("Shivam");
  q.push("Stuti");

  cout<<"Initial Size : "<<q.size()<<endl;

  cout<<"\nFirst Element : "<<q.front();
  cout<<"\nLast Element : "<<q.back();

  cout<<"\nUsing pop funtion"<<endl;
  q.pop();
  cout<<"\nAt front , after Pop : "<<q.front();
  
}