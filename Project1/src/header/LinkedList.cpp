#include <iostream>
#include "./LinkedList.hpp"

using namespace std;
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
        last = head;
        delete temp;
    }
    else 
    {
        while(temp->next != NULL)
        {
            if(temp->next->next == NULL && temp->next->value == value)
            {
                clean = temp->next;
                last = temp;
                temp->next = NULL;
                delete clean;
                return;
            } 
            else if(temp->next->value == value)
            {
                clean = temp->next;
                last = temp;
                temp->next = temp->next->next;
                delete clean;
                return;
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