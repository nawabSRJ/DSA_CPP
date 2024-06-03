#include<iostream>
#include<map>
using namespace std;
int main()
{
  map <int, string> m;
  map <string , int> words;
  words["e"] = 2;
  words["r"] = 1;
  //initializing

  // can be called as ordered map as they stay in sorted order (by key)
  m[1] = "Srajan";
  m[3] = "Shivam";
  m[2] = "Stuti";
  cout << "count check : " <<m.count(12269) <<endl;
  cout <<"First Print check : " << m[2] <<endl;
  m.insert({5,"Aaditya"});  
  m.insert({4,"Annu"});
  for(auto i : m){
    cout<<i.first<<" "<<i.second<<endl;
  }

  // to check presence
  cout<<"Is Key 2 present ->"<<m.count(2);
  cout<<"\nIs Key 7 present ->"<<m.count(7);

  // using erase() function

  m.erase(5);
  cout<<"\nAfter erase : "<<endl;
  for(auto i : m){
    cout<<i.first<<" "<<i.second<<endl;
  }

  // to print from specific key (using iterator):
  auto it = m.find(2);
  cout<<"From here : "<<endl;
  for(auto i = it; i != m.end(); i++){
    cout<<(*i).first<<endl;
  }

  cout <<"words key -> e: "<< words["e"] <<endl;
  cout << words.count("e");
}