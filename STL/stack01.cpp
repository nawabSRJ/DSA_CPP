// todo - all info about STL Stack
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int> st; // * creating a stack of integers

    // * pushing elements
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    int topMost = st.top(); // * accessing the top most element

    st.pop();   // * 40 removed

    // * displaying elements
    cout << "Elements of stack : "<<endl;
    while(!st.empty())
    {
        cout << st.top()<<" ";
        st.pop();
    }
    
    return 0;
}