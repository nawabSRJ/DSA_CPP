// ? Question : You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number. You are given an integer array nums representing the data status of this set after the error. Find the number that occurs twice and the number that is missing and return them in the form of an array.(Leetcode)
// [3,2,3,4,6,5] -> [3,1]
#include<iostream>
using namespace std;

int main()
{
    int nums[] = {1,2,2,4};
    int ans[2];
    int arrSum = 0,actSum = 0;

    int size = sizeof(nums) / sizeof(int);
    for(int i = 0;i<size;i++){
        arrSum += nums[i];
    }
    actSum = (size * (size + 1)) / 2;
    // cout<<actSum;
    cout<<"Array Sum = "<<arrSum<<endl;
    cout<<"Actual Sum = "<<actSum<<endl;

    if(actSum > arrSum){
            for(int i = 0; i < size - 1;i++){
            if(nums[i] == nums[i+1]){
                ans[0] = nums[i];
                ans[1] = ans[0] + 1;    // bcoz, it is not in array
                            
            }
        }
    }
    else if(actSum < arrSum){
        for(int i = 0; i < size - 1;i++){
            if(nums[i] == nums[i+1]){
                ans[0] = nums[i];
                ans[1] = ans[0] - 1;    // bcoz, it is not in array
                            
            }
        }
    }
    
    // cout<<"here";
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}