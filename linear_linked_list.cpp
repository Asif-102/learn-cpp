#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;

    Node(int value)
    {
        this->value = value;
        Next = NULL;
    }
};

void insertAtTaile(Node* &head, int value)
{
    Node* newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}

void display(Node* node)
{
    while(node != NULL)
    {
        cout << node->value;
        if(node->Next != NULL)
            cout << " -> ";
        node = node->Next;
    }
}

int main(void)
{
    Node *head = NULL;

    insertAtTaile(head, 1);
    insertAtTaile(head, 5);
    insertAtTaile(head, 8);
    insertAtTaile(head, 9);

    display(head);
}
