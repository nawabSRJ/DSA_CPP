// todo - remove substring from an ugly string to make it a beautiful string
// * source - https://codeforces.com/contest/1941/problem/C
#include<iostream>
using namespace std;

int main()
{
    string s = "azabazapi";
    int cnt = 0;
    string part1 = "map" , part2 = "pie";
  while(s.length() != 0 && s.find(part1) < s.length()){
            s.erase(s.find(part1) , part1.length());
            cnt++;
        }
  while(s.length() != 0 && s.find(part2) < s.length()){
            s.erase(s.find(part2) , part2.length());
            cnt++;
        }
    cout <<"Beautiful String : " << s << endl;
    cout <<"Count : "<< cnt << endl;
    return 0;
}