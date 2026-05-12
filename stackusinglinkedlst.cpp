#include <iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class stack
{
private:
    Node *top;

public:
    stack()
    {
        top = NULL;
    }
    int push (int value)
    {
        Node *newnode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push Value" << value << endl;
        return value;
    }
}
void pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
    }

    Node *temp = top;
    top = top->next;
    cout << "Popped value: " << top->data << endl;
} 