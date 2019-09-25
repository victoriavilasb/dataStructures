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
    int length;
    Node * last;
    Node * newValue;


    public: 
        LinkedList();
        int get_length();
        void add_list(int value);
        void print_list(LinkedList &list);
        void remove_element(int value);
};

LinkedList::LinkedList() 
{
    head = NULL;
    length = 0;
    Node * last;

}

int 
LinkedList::get_length() 
{
    return length;
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
LinkedList::remove_element(int value)
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



// LinkedList::Add(int data) {
//     Node * node = new Node();
//     node -> value = data
//     node -> next = 
// }