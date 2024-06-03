// ? source : https://www.geeksforgeeks.org/problems/find-the-closest-number5513/1
#include<iostream>
#include<unordered_map>
#include <climits>

using namespace std;
int findClosest( int n, int k,int arr[]) 
    { 
// algo : make a map of num : diff , return with min map.second
// if 2 map.second are same then -> max of map.first in them
        unordered_map <int , int> mp;
        
        for(int i = 0; i < n ; i++){
            mp[arr[i]] = abs(arr[i] - k);    
        }
        cout << "Map elements : "<<endl;
        for(auto j : mp){
            cout <<j.first<<" : "<<j.second<<endl;
        }
        // find min map.second
        int min = INT_MAX;
        int ans = -1;   // initially
        for(auto i: mp){
            if(i.second < min){
                ans = i.first;
                min = i.second;
            }
            else if(i.second == min){
                if(i.first > ans){
                    ans = i.first;
                }else continue;
            }
        } // endof for
        return ans;
    } 
int main()
{
    int n = 4;
    int k = 4;
    int arr[n] = {1,3,6,7};
    cout<<findClosest(4 ,4 , arr)<<endl;

    return 0;
}