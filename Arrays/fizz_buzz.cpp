// ? Question : Given an integer n, return a string array answer (1-indexed) where:

// answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
// answer[i] == "Fizz" if i is divisible by 3.
// answer[i] == "Buzz" if i is divisible by 5.
// answer[i] == i (as a string) if none of the above conditions are true.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int n = 3; // [1,2,3]
    vector<string> ans;
    for(int i = 1 ; i <= n ; i++){
            if(i % 3 == 0 && i % 5 == 0){
                ans.push_back("FizzBuzz");
            }else if(i % 3 == 0){
                ans.push_back("Fizz");
            }else if(i % 5 == 0){
                ans.push_back("Buzz");
            }
            else{
                string num = to_string(i);
                ans.push_back(num);
            }
        }

        for(string val : ans)
        {
            cout << val << " ";
        }
    return 0;
}