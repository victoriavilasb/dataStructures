#include <iostream>
#include "./Stack.hpp"

using namespace std;

Stack::Stack()
{
    base = NULL;
    Node * top;
}

void
Stack::push(int value)
{
    newValue = new Node;
    newValue -> value = value;
    newValue -> next = NULL;
    if(base == NULL)
    {
        base = newValue;
        top = newValue;
    }
    else
    {
        top -> next = newValue;
        top = newValue;
    }
}

void 
Stack::print()
{
    Node * temp = base;
    if (base != NULL)
    {
        while (temp)
        {
            cout << temp->value << endl;
            temp = temp->next;
        };
        cout << endl;
    }
}