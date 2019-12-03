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
LinkedList::push(word value) 
{
    newValue = new Node;
    newValue -> value.word_desc = value.word_desc;
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
LinkedList::remove_by_value(word value)
{
    Node * temp = head;
    Node * clean;

    if(head->value.word_desc == value.word_desc)
    {
        head = temp -> next;
        delete temp;
    }
    else 
    {
        while(temp->next != NULL)
        {
            if(temp->next->next == NULL && temp->next->value.word_desc == value.word_desc)
            {
                clean = temp->next;
                last = temp;
                temp->next = NULL;
                delete clean;
                return;
            } 
            else if(temp->next->value.word_desc == value.word_desc)
            {
                clean = temp->next;
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
            std::cout << temp->value.word_desc << " ";
            temp = temp->next;
        };
        cout << endl;
    }
    else
    {
        cout << "Empty!" << endl;
    }
    
}