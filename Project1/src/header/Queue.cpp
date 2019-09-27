#include <iostream>
#include "./Queue.hpp"

int 
Queue::first_out()
{
    Node * temp = head;
    int out;
    if(head == NULL)
    {
        return 0;
    }
    else
    {
        head = temp->next;
        out = temp->value;
        delete temp;
        return out;
    }  
}
