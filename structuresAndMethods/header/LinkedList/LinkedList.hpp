#include "./Node.hpp"
class LinkedList 
{
    Node * last;
    Node * newValue;

    public: 
        Node * head;
        LinkedList();
        void push(int value);
        void print();
        void remove_by_value(int value);
        ~LinkedList();
};


