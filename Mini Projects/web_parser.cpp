#include<iostream>
#include<stack>
using namespace std;

bool parser(string);

int main()
{
    string code;
    cout << "Enter code : "<<endl;
    getline(cin , code);

    bool check = parser(code);
    if(check)   cout << "Code Correct";
    else cout << "Error";
    return 0;
}

bool parser(string code)
{
    stack <string> st;
    for(int i = 0 ; i < code.length() ; i++)
    {
        string ch = "";
        if(code[i] == '<')
        {
            i++;
            while(code[i] != '>')
            {
                ch += code[i];
                i++;
            }
            if(st.empty()) st.push(ch);
            else{
                if(ch == '/' + st.top()){
                    st.pop();   // pop the top ~ closing tag matched
                }
                else st.push(ch);
            }

        }

    }

    if(st.empty()) return true;
    else return false;  // * code incorrect
}