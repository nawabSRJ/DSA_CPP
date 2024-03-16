// * Synopsis : in order to solve a leetcode question of hard category : https://leetcode.com/problems/first-missing-positive/description/ 

// * i decided to play with the sort function , reason being to eliminate the -ve values from the test cases
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int choose(int a){
    if(a > 0){
        return a;
    }
}
int main()
{
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(-1);
    arr.push_back(1);
    sort(arr.begin() , arr.end());
    for(int i : arr)
    {
        cout << i <<" ";
    }
    return 0;
}