#include <iostream>

class Node 
{
    public:
        int value;   
        Node * next;
};

using namespace std;

class LinkedList 
{
    Node * last;
    Node * newValue;

    public: 
        Node * head;
        LinkedList();
        void push(int value);
        void print();
        void remove_by_value(int value);
        ~LinkedList();
};

LinkedList::LinkedList() 
{
    head = NULL;
    Node * last;
}

LinkedList::~LinkedList()
{
    Node * temp = head;
    while (head)
    {
        temp = head;
        head = head->next;
        delete temp;
    };
}

void
LinkedList::push(int value) 
{
    newValue = new Node;
    newValue -> value = value;
    newValue -> next = NULL;
    if(head == NULL)
    {
        head = newValue;
        last = newValue;

    }
    else
    {
        last -> next = newValue;
        last = newValue;
    }
}

void
LinkedList::remove_by_value(int value)
{
    Node * temp = head;
    Node * clean;
    if(head->value == value)
    {
        head = temp -> next;
        delete temp;
    }
    else 
    {
        while(temp->next != NULL)
        {
            if(temp->next->next == NULL && temp->next->value == value)
            {
                clean = temp->next;
                temp->next = NULL;
                delete clean;
            } 
            else if(temp->next->value == value)
            {
                clean = temp->next;
                temp->next = temp->next->next;
                delete clean;
                break;
            }
            temp = temp->next;
        }
    }
}

void 
LinkedList::print()
{
    Node * temp = head;
    if (head != NULL)
    {
        while (temp)
        {
            cout << temp->value << " ";
            temp = temp->next;
        };
        cout << endl;
    }
    else
    {
        cout << "Empty!" << endl;
    }
    
}

