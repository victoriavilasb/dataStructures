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
    Node * head;
    Node * last;
    Node * newValue;


    public: 
        LinkedList();
        void add_list(int value);
        void print_list(LinkedList &list);
        void remove_by_value(int value);
        int first_out();
};

LinkedList::LinkedList() 
{
    head = NULL;
    Node * last;

}

void
LinkedList::add_list(int value) 
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
    if(head == NULL)
    {
        printf("List already empty!\n");
    }
    else
    {
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
}

int 
LinkedList::first_out()
{
    Node * temp = head;
    int out;
    if(head == NULL)
    {
        printf("List already empty!\n");
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

void 
LinkedList::print_list(LinkedList &list)
{
    Node * temp = head;
    if (head != NULL)
    {
        while (temp)
        {
            cout << temp->value << " ";
            temp = temp->next;
        };
    }
    else
    {
        cout << "List is empty!" << endl;
    }
    
}
