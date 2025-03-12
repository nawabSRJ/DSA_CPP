// todo - return the data of the kth node from the end of the LL
// C++ program to find N'th node from end
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
    int data;
    Node* next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

/* Function to find the Nth node from
   the last of a linked list using Naive Approach*/
int findNthFromLast(Node* head, int N)
{
    // edge cases
    if(head == nullptr){
        return -1;  // not found
    }
    // find total nodes
    int total = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        total++;
    }
    // if N equals the total then return head ka data
    // Check if value of N is not
    // more than length of the linked list
    if (total < N)
        return -1;
    // otherwise : return (total-N+1) th node data
      // Get the (total-N+1)th node from the beginning
      temp = head;  // * re-define 
    for (int i = 1; i < total - N + 1; i++)
        temp = temp->next;

    return temp->data;
}



void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node(new_data);

    /* link the old list of the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

// Driver Code
int main()
{
    /* Start with the empty list */
    Node* head = NULL;

    // create linked list 35->15->4->20
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 35);

    // Function call
    cout << findNthFromLast(head, 2);
    return 0;
}
