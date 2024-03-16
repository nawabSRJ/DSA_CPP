// * source : https://www.geeksforgeeks.org/problems/check-frequencies4211/1
#include<iostream>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

bool sameFreq(string s)
	{
	    set <int> st; 
	    map <char , int> chars;
	    for(int i = 0 ; i < s.length() ; i++){
	        chars[s[i]] += 1;
	    }
	    
	    for(auto i : chars){
	        st.insert(i.second);
	       
	    }
	    if(st.size() == 1) return true;
	    else if(st.size() > 2) return false;
	    //if(st.size() > 2) return false;
	    // store max vs min count
	    auto it1 = st.begin();
	    auto it2 = next(it1); 
	    int maxfreq = max(*it1 , *it2); 
	    int minfreq = min(*it1 , *it2);
	    
	    int countmin = 0 , countmax = 0;
	    for(auto i : chars){
	        if(i.second == maxfreq){
	            countmax += maxfreq;
	        }
	        else if(i.second == minfreq){
	            countmin += minfreq;
	        }
	    }
	    cout <<"countmin -> "<< countmin << endl;
	    cout <<"countmax -> "<< countmax << endl;
	    if(countmin < countmax && countmin != 1){
	        return false;
	    }
	    // check if size is 2 
	    if(st.size() == 2){
	        // use iterators to check difference
	          // remember only 'next' will be independent  
	         if(*it1 - *it2 == 1 || *it1 - *it2 == -1){
	             return true;
	         }
	    }
	    else if(st.size() == 1){
	        return true;
	    }
	   return false;
	}

int main()
{
    string s = "xxyyz";
    cout << sameFreq(s);
}