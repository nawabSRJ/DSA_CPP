// todo - Implement a singly linked list
#include<iostream>
using namespace std;
int totalNodes = 0; // global var. for keeping track of no. of nodes
class Node{
    public :
    int data;
    Node *next;
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        //memory free
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for the node with data : " << value <<endl;
    }
    
};

// &head (reference var.) is used so that changes are made in the original LL and not in copy of LL
void InsertAtHead(Node* &head , int d)
{
    // * create a node and point its next to head -> correct the pointer of head to newly made node
    Node *temp = new Node(d);
    temp -> next = head;
    head = temp;    // to make it the head
    totalNodes++;
}

void InserAtEnd(Node* &head , int d)
{
    // * traverse until node -> next != NULL and then add the new node to its next
    
    // * (1) Create a Node
    Node* temp = new Node(d);
    Node* start = head;

    // * (2) Traverse until next is NULL
    while(start->next != NULL)
    {
        start = start->next;
    }

    // * (3)Add the new node + increase counter

    start->next = temp;
    // temp->next = NULL; no need to do explicitly , by default NULL hoga , because of class definition
    totalNodes++;
}

void InsertAtPos(Node* &head , int pos ,int d)
{
    if(pos > (totalNodes+1)){
        cout << "invalid position"<<endl;
        return;
    }
    if(pos == 1)
    {
        InsertAtHead(head , d);
        return; // so that further execution is not happening and this functions returns the control
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < pos - 1){
        temp = temp->next;
        cnt++;
    }

    // create a new node for d
    Node* newNode = new Node(d);
    newNode -> next = temp->next;
    temp->next = newNode;
    totalNodes++;
}

void deleteNode(Node* &head , int position)
{
    
    if(position > totalNodes || position <= 0){
        cout <<"Invalid position"<<endl;
        return;
    }
    // ? deleting first node
    if(position == 1)
    {
        Node* temp = head;
        head = head->next;
        // * free the memory
        temp->next = NULL;  // ! BEFORE freeing the memory make temp node point to null , else whole LL is gone
        delete temp;
        totalNodes--;
    }
    else{
        // ? deleting node in between or at last
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;

        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        totalNodes--;
    }
}

void showList(Node* &head)
{
    Node* temp = head;     

    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    // system("cls");
    Node* node1 = nullptr; //This will ensure that node1 starts as an empty list, and the behavior of your program will be consistent.
    Node* head = node1;  
    InsertAtHead(head , 12);
    InsertAtHead(head , 10);
    InsertAtHead(head , 7);

    InserAtEnd(head , 32);
    InserAtEnd(head , 52);
    InserAtEnd(head , 72);

    // 7 10 12 32 52 72 
    showList(head);

    InsertAtPos(head , 7 , 82);
    showList(head);

    cout <<"head node before : " <<head->data<<endl;
    deleteNode(head , 1);
    showList(head);
    cout <<"head node after : " <<head->data<<endl;

    return 0;
}
