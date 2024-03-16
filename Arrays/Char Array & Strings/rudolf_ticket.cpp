// * source - https://codeforces.com/contest/1941/problem/A
// * n -> left pocket coins , m -> right pocket coins  k -> Total Limit

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n = 3, m = 4, k = 2000;
    int left[n] = {1 , 1 , 1 };
    int right[m] = {1 , 1 , 1, 1};

    // Brute force approach 
    // int cnt = 0;
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < m; j++)
    //     {
    //         if(left[i] + right[j] <= k)
    //         {
    //             cnt++;
    //         }
    //     }
    // }

    // Two pointer approach
    sort(left , left+n);
    sort(right , right+m);
    
    int  q = m-1;
    int cnt = 0;
    // {1 , 5 , 10 , 14 };
    // {1 , 1 , 2, 8};
    for(int i = 0 ; i < n ; i++)
    {
        while(q >= 0 && left[i] + right[q] > k)
        {
            q--;
        }
        cnt += q+1; 
    }


    cout << "Combinations : " <<cnt <<endl;

    return 0;
}