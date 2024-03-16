// todo - generate power set of a given set
// * power set if the collection of all subsets of a given set
#include<iostream>
using namespace std;


void generatePowerSet(int arr[] , int n)
{
    for(int i = 0 ; i < (1<<n); i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i & (1<<j))      // ? little problem in understanding this
            {
                cout << arr[j]<<" ";
            }
        }cout<<endl;
    }
}


int main()
{
    int arr[3] = {1,2,3};
    cout <<"here"<<endl;
    generatePowerSet(arr , 3);
    return 0;
}
