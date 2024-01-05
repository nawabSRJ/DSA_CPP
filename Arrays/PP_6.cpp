// * Practice Problem 6
// ? Array Intersection : Given 2 arrays A and B , return an array that contains intersection of both A and B or the elements common to both.
#include<iostream>
#include<vector>
using namespace std;

void intersect(int a1[] , int a2[], int s1, int s2)
{
    bool flag = false;
    vector <int> ans;
    for(int i = 0;i<s1;i++)    
    {
        int elt = a1[i];
        for(int j = 0;j<s2;j++)
        {
            if(elt == a2[j])
            {
                flag = true;
                ans.push_back(elt);
            }
        }
    }
    if(flag)
    {
        for(int i : ans)
            cout<<i<<" ";
    }
    else{
        cout<<"No Common Element"<<endl;
    }
}
int main()
{
    int A[] = {1,2,5,7,11};
    int B[] = {3,5,9,11,12,13,15};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    intersect(A,B,sizeA,sizeB);
}