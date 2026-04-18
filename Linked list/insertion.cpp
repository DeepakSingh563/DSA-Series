#include <iostream>
#include "Node.h"
using namespace std;

// function to insert any node at the begning!!
Node *insert(Node *head, int value)
{
    Node *n1 = new Node(value);
    Node *temp = head;

    if (head == NULL)
    {
        head = n1;
    }

    else
    {
        n1->next = temp;
        head = n1;
    }
    return head;
}


//function to insert any node to the end of the linked list;;
Node *insertEnd(Node *head, int value)
{
    Node *n1 = new Node(value);

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n1;
    return head;
}

int main()
{
    int n, value;
    cin >> n;

    Node *head = NULL;
    Node *temp = NULL;

    // Creation of Linked LIst

    cout << "enter the value" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        Node *n1 = new Node(value);
        if (head == NULL)
        {
            head = n1;
            temp = head;
        }
        else
        {
            temp->next = n1;
            temp = n1;
        }
    }

    int value1;
    cout << "enter your value you want to insert" << endl;
    cin >> value1;

    insertEnd(head, value1);

    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
