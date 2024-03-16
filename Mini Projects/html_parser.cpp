#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
using namespace std;

// todo - do the same thing with file handling in cpp
bool parser(string);
int main()
{
    ifstream in; // object creation
    in.open("input.txt");
    if (!in)
    {
        cout << "File not present";
    }
    string code; // to store html code
    string line;
    while (getline(in, line))
    {
        code += line; // extract each line and put in code
    }

    in.close();

    bool check = parser(code);
    if(check) cout << "\nYes , code is right";
    else cout << "\nError";
    return 0;
}

bool parser(string code)
{
    vector<string> check;
    for (int i = 0; i < code.length(); i++)
    {
        string ch = "";
        if (code[i] == '<')
        {
            i++;
            while (code[i] != '>')
            {
                ch += code[i];
                i++;
            }
            check.push_back(ch);
        }
    }
    cout << "Values in Check\n";
    for(int i = 0 ; i < check.size() ; i++)
    {
        cout << check[i]<< " ";
    }cout<<endl;
    int j = check.size() - 1;
    bool flag = true;   // * assuming code is alright
    cout << "from here\n";
    for(int i = 0 ; i <= check.size() / 2 ; i++)
    {
        if(j < i) break;  // if j crosses i (in case of even size)
        cout << check[i] <<" "<<check[j]<<endl;
        
        if(check[j] != '/' + check[i])
        {
            flag = false;
        }
        j--;
    }
    
    return flag;
}