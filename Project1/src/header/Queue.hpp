#include <iostream>
#include "./LinkedList.hpp"

using namespace std;


class Queue : public LinkedList
{
    public:
        Queue();
        int first_out();
};

Queue::Queue()
{
    LinkedList();
}

int 
Queue::first_out()
{
    Node * temp = head;
    int out;
    if(head == NULL)
    {
        printf("Already empty!\n");
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
