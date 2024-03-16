#include<iostream>
#include<queue>
using namespace std;

void showQ(priority_queue <int> q)
{
  // priority_queue <int> :: iterator it;
  int n = q.size();
  for(int i =0 ; i<n; i++){
    cout<<q.top()<<" ";
    q.pop();    
  }cout<<endl;
}
void showMinQ(priority_queue <int, vector<int> , greater <int> > q)
{
  // priority_queue <int> :: iterator it;
  int n = q.size();
  for(int i =0 ; i<n; i++){
    cout<<q.top()<<" ";
    q.pop();    
  }cout<<endl;
}


int main()
{
  // max heap
  priority_queue <int> maxi;

  // min heap
  priority_queue <int, vector<int> , greater <int> > mini;

  maxi.push(1);
  maxi.push(3);
  maxi.push(2);
  maxi.push(0);

  cout<<"Size -> "<<maxi.size()<<endl;
  cout<<"\nThe Max Heap PQ : "<<endl;
  showQ(maxi);  // 3 2 1 0 ~ front -> max element

  mini.push(1);
  mini.push(3);
  mini.push(2);
  mini.push(0);
   cout<<"\nThe Min Heap PQ : "<<endl;
  showMinQ(mini);  // 0 1 2 3 ~ front -> min element
  
  cout<<"\nIs maxi empty? "<<maxi.empty()<<endl;

  cout<<"Deletion from maxi";
  maxi.pop();
  showQ(maxi);
}