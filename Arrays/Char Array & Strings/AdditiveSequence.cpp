#include<iostream>
#include<string>
using namespace std;
bool check(int next , int next_len , int index , string s){
    string num = s.substr(index+1 , next_len);
    cout <<"num here : " <<num <<endl;

    if()
}
 bool isAdditiveSequence(string s) {
        int n = s.length();
        if (n < 3) return false; // Need at least three digits for an additive sequence
        
        for (int i = 2; i < n; i++) {
            int t1 = s[i - 1] - '0'; 
            int t2 = s[i - 2] - '0'; 
            int next = t1 + t2; 
            if(next < 9 ){
                if (next != s[i] - '0') 
                    return false;
            }
            else if(next > 9){
                string check = to_string(next);
                int nlen = check.length();
                // if(!(check(next , nlen , i , s))){
                //     return false;
                // }
                string num = s.substr(i+1 , nlen);
                if(num != check)
                {
                    return false;
                }
                else{
                    
                }

            }
        }
        
        return true;
    }



int main()
{
    cout << isAdditiveSequence("12358");
    return 0;
}