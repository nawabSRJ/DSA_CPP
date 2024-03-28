// todo - given an array find the minimum sum of k consequtive numbers
// * Sliding Window example

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    system("cls");
    int k = 3 , n = 8;  // k-> window size , n -> size of array
    vector <int> arr = {-2 , 10 , 1 , 3 , 2 , -1 , 4 , 5};
    int sum = 0 , ans = 1000; // SAMPLE LARGE VALUE

    for(int i = 0 ; i < k ; i++)
    {
        sum += arr[i];
    }
    cout << sum << " ";
    ans = min(sum , ans);
    
    // sliding window starts
    for(int i = 1 ; i < n-k+1 ; i++)
    {
        sum -= arr[i-1];
        sum += arr[i+k-1];
        ans = min(ans , sum);
        cout << sum << " ";
    }cout << endl;

    cout << ans << endl;

    return 0;
}