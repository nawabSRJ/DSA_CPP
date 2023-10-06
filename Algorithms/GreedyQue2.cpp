// ? Greedy for water
// ? You are given container full of water. Container can have limited amount of water. You also have N bottles to fill. You need to find the maximum numbers of bottles you can fill.

// ? N -> No. of bottles ; X -> Capacity of the container and List BotCap -> Capacities of N bottles

#include<iostream>
#include<algorithm>
using namespace std;

// const int max = 100;
int BotCap[100];
int main()
{
    int N , X;
    int totalBottles = 0;
    int currentCap = 0;
    cout<<"Enter the number of Bottles & the capacity of the container : ";
    cin >> N >> X;

    cout<<"Enter the capacity of each bottle : ";
    for (int i = 0; i<N;i++)
    {
        cin >> BotCap[i];
    }

    sort(BotCap , BotCap + N);

    for(int i = 0;i<N;i++)
    {
        currentCap += BotCap[i];
        if(currentCap > X)
            break;
        totalBottles += 1;
    }
    cout << "Total Number of bottles are : "<<totalBottles;

}