#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    //int nums[] = {100,4,200,1,3,2};
    vector <int> nums;
    nums = {1,2,0,1}; // 3
    sort(nums.begin() , nums.end());
        vector <int> seq;
        int count = 0;
        for(int i = 0 ; i < nums.size() - 1; i++){
            
            if(nums[i + 1] - nums[i] == 1){
                count += 1;
                // i++;
            }else{
            seq.push_back(count + 1);
            count = 0; // reset
            }
        }
        seq.push_back(count + 1);   // * in case the loop ends without reaching the else block

    for(int i = 0 ; i < seq.size() ; i++)
    {
        cout << seq[i] <<" ";
    }
    return 0;
}