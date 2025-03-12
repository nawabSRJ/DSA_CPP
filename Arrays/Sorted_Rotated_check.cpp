// todo : check if array is sorted and rotated
// ! problem : https://leetcode.com/problems/check-if-array-is-sorted-and-rotated

#include <iostream>
#include <vector>
using namespace std;
bool isSorted(vector<int>& nums){
    for(int i = 0; i < nums.size()-1; i++){
        if(nums[i]>nums[i+1]) return false;
    }
    return true;
}
bool isSortedRotated(vector<int> &nums){
    if(isSorted(nums)) return true; // Sorted only, 0 rotations
        if (nums[nums.size() - 1] > nums[0]) return false;
        // some rotations:
        int points = 0; // storing rotation points
        int ind = -1;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] > nums[i+1]){
                points += 1;
                ind = i+1;
                if(points > 1) return false; // more than 1 rotation points
            }
        }
        // confirm rest order is non-dec 
        for(int i = ind; i < nums.size()-1;i++){
            if(nums[i]>nums[i+1]) return false;
        }
        return true;
}

int main()
{
    vector<int> nums = {3,4,5,1,2};
    bool ans = isSortedRotated(nums);
    if(ans){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}