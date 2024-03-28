// todo - manually implementing stack using fixed size stackay

#include<iostream>
using namespace std;
#define MAX 7

class Stack{
    int size,top;
    int *stack;
    public:
    Stack(int size)
    {
        this->size = size;
        stack = new int[size];
        top = -1;   // initially
    }


    
    void push();
    void pop();
    void peek();
    bool isempty();

};

// * Note : All the operations are of O(1) Time Complexity

void Stack:: push()
{   
    if(top == size - 1)
    {
        cout << "Overflow" <<endl;
        return;
    }
    int elt;
    cout << "Enter the element to push : "<<endl;
    cin >> elt;
    top++;
    stack[top] = elt;
}   
void Stack:: pop()
{
    if(top == -1)
    {
        cout << "Underflow" << endl;
        return;
    }
    cout << "Element Popped : " << stack[top] <<endl;
    // stack[top] = 0;
    top--;
}
void Stack:: peek()
{
    if(isempty() == true){
        cout << "Stack is Empty "<<endl;
        return;
    }
    cout << "Top Element : " << stack[top] <<endl;
}
bool Stack:: isempty()
{
    if(top == -1)
        return true;
    else
        return false;
}

int main()
{
    Stack obj(MAX);
    cout << obj.isempty() << endl;
    // obj.pop();
    obj.push();
    obj.push();
    obj.push();
    obj.peek();
    obj.pop();
    obj.peek();
    
    
    return 0;
}