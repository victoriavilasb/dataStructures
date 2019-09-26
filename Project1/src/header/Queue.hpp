#include <iostream>
#include "./LinkedList.hpp"

using namespace std;


class Queue : public LinkedList
{
    public:
        int first_out();
};

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
