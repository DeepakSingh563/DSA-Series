class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};