// todo - convert a single dimension array to a DD Array
// ? Source - https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/

#include <bits/stdc++.h>
using namespace std;

bool isDone(vector<int> nums)
{
    // todo - to check if all are = -1
    for (auto i : nums)
    {
        if (i > 0)
            return false;
    }
    return true;    // all less than 0
}

int main()
{
    vector<int> nums = {1, 3, 4, 1, 2, 3, 1};
    vector<vector<int>> ans;
    vector<int> row;
    map<int, int> mp;
    
    while (!isDone(nums))
    {
        cout <<"came inside";
        for (int i = 0; i < nums.size(); i++)
        {
            if (row.empty() && nums[i] != -1)
            {
                row.push_back(nums[i]);
                mp[nums[i]] = 1;
                nums[i] = -1;
            }
            else if (mp.count(nums[i]) == 0 && nums[i] != -1)
            {
                row.push_back(nums[i]);
                mp[nums[i]] = 1;
                nums[i] = -1;
            }
        }
        // append row to ans vector
        ans.push_back(row);
        cout << "row here"<<endl;
        for(auto i : row)
        {
            cout << i<<" ";
        }cout<<endl;
        row.clear();
        mp.clear();
    }

    cout <<"ans vector : "<<endl;

    for (const auto& row : ans) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
    // cout << endl;
    // for (auto i : nums)
    // {
    //     cout << i << " ";
    // }
    return 0;
}