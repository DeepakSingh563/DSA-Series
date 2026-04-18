#include <iostream>
#include "Node.h"
using namespace std;
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

    // DIsplay linked list

    cout << "linked list is" << endl;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << NULL;
    return 0;
}
