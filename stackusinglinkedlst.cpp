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

{
void peek()
    {
        if (top == NULL)
        {
            cout << "List is Empty." << endl;
        }
            else
        {
            Node *current = top;
            while ( current != NULL)
                    {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }

bool isEmpty()
    {
        return top == NULL; 
    }
};

int main()
{
    stack stack;

    int choice = 0;
    int value;

while (choice !=5)

    {
        cout << "1.push\n";
        cout << "2.pop\n";
        cout << "3.peek\n";
        cout << "4.exit\n";
        cout << "enter your choice:";
        cin >> choice;
    
        switch (choice)
    {
        case 1:
            cout << "enter the value to push:";
            cin >> value;
            stack.push(value); //push the entered value into the stack
            break;
        case 2:
            if (!stack.isempty())
            {
                stack.pop(); //pop the top element from the stack
            }
            else
            {
                cout << "Stack is empty. Cannot pop." << endl;
            }
            break;
        case 3:
            if (!stack.isempty())
            {
                stack.peek();
            }
            else
            {
                 cout << "Stack is empty. No top value." << endl;
            }
            break;
        case 4:
            cout << "exiting program." << endl;
            break;
        }
            default:
            cout << "invalid choice. try again." << endl;
            break;
            cout << endl;
    }
    return 0;
};