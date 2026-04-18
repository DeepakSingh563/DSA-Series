#include<iostream>
#include "Node.h"

using namespace  std;
bool Search(Node*head,int key)
{
    Node*temp= head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;

        }
        temp=temp->next;
    }
    return false;

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

    int key;
    cin>>key;

    cout<<"searching of key"<<endl;
    cout<<Search(head,key);

}