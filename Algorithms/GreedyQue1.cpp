// ? Question : Given an array A of integers consisting of time consumption of creative tasks that you like to do. T is the total time you have to do these tasks. Return the maximum number of taks that you can do in time T.

#include<iostream>
#include<algorithm>
using namespace std;

const int MAX = 105;
int A[MAX];

int main()
{
    int T, N , numberofThings = 0 , currentTime = 0;
    // * T -> Total Time you have to do creative tasks
    // * N -> Total creative taks
    // * numberofThings -> for returning the answer
    // * currentTime -> to add the time of each taks you are doing and check against T

    cout<<"Enter Total Tasks and Total Time Limit : \n";
    cin>> N >> T;
    
    cout<<"Enter the time of each Task one by one : \n";
    for(int i = 0;i<N;++i)
    {
        cin >> A[i];
    }
    sort(A , A+N);

    for(int i = 0; i < N; ++i)
    {
        currentTime += A[i];
        if(currentTime > T)
            break;
        numberofThings ++;
    }

    cout<<"In time "<<T<<" you can do "<<numberofThings<<endl;
}