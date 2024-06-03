// ? source : https://www.geeksforgeeks.org/problems/three-way-partitioning/1
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void swapElts(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // int n = array.size();
        
        // for(int i = 0 ; i < n ; i++){
        //     if(array[i] < a){
        //         // swap with front
        //         swapElts(array[i] , array[0]);
        //     }
        //     else if(array[i] > b){
        //         // swap with last
        //         swapElts(array[i] , array[n-1]);
        //     }
        // }
        deque<int> dq;
        if(a != b){
            dq.push_front(a);
            dq.push_back(b);
        }else if(a == b){
            dq.push_front(a);
        }
        int n = array.size();
        for(int i = 0 ; i < n ; i++){
            if(array[i] < a){
                dq.push_front(array[i]);
            }
            else if(array[i] > b){
                dq.push_back(array[i]);
            }
                
        }
        // push to vector
        array.clear();
        // right way to copy in already declared vector
        array = vector<int>(dq.begin(), dq.end());
    }
int main()
{
    vector<int> array = {10, 7, 6, 1, 4, 10, 5, 2 ,7, 5, 3, 3, 8, 3, 8};
    int a = 5 , b = 5;
    int n = sizeof(array) / sizeof(int);
    threeWayPartition(array , a , b);
    for(int i : array){
        cout << i <<" ";
    }cout << endl;

    return 0;
}