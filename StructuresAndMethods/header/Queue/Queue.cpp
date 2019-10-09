#include <iostream>
#include "./Queue.hpp"

// defines a method for the proporse of remove first value of the queue
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
