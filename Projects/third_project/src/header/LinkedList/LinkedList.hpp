#include "./Node.hpp"

class LinkedList 
{
    Node * last;
    Node * newValue;

    public: 
        Node * head;
        LinkedList();
        void push(word value);
        void print();
        void remove_by_value(word value);
        ~LinkedList();
};


