#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);    
    cout<<v.capacity()<<endl; // total no. of elements it can accomodate
    cout<<v.size()<<endl; // no. of elements present in vector
    v.push_back(2);
    v.push_back(3);
  cout<<v.capacity()<<endl;
  cout<<v.size()<<endl;

  cout<<"Element at index 2 = "<<v.at(2)<<endl;
  cout<<"Front : "<<v.front()<<endl;
  cout<<"Back : "<<v.back()<<endl;

  // printing the vector
  cout<<"Before Pop :"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }cout<<endl;

  v.pop_back();  // remove last element('back' element)
  cout<<"After Pop :"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }cout<<endl;

  cout<<"Size before clear : "<<v.size()<<endl;
  v.clear();
  cout<<"Size after clear : "<<v.size()<<endl;

  vector <int> vec(5,1); // initialises all the 5 elements with 1
  for(int i : vec)
    {
      cout<<i<<" ";
      
    }
  vector<int> nums1;
  nums1.push_back(0);
  nums1.push_back(69);
  // to copy the content of one vector to another
  //vector<int> last(vec);
  //! nums1(vec); ~ not working
  
  nums1 = vec;  // * Correct Way
  cout<<"\nElements of nums1 : "<<endl;
  for(int i : nums1){
    cout<<i<<" ";
  }
}  