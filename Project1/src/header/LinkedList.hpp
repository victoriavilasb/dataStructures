#include <iostream>

class Node 
{
    public:
        int Info;   
        Node * next;
};

using namespace std;

class LinkedList 
{
    int length;
    Node * head;

    public: 
        LinkedList();
        int get_length();
};

LinkedList::LinkedList() 
{
    this->length = 0;
    this->head = NULL;
}

int LinkedList::get_length() 
{
    return length;
}



// LinkedList::Add(int data) {
//     Node * node = new Node();
//     node -> Info = data
//     node -> next = 
// }