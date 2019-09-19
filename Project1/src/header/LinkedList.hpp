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
        cout << "Lista está vazia!" << endl;
    }
    
}



// LinkedList::Add(int data) {
//     Node * node = new Node();
//     node -> value = data
//     node -> next = 
// }