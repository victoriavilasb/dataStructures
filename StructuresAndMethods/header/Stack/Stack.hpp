#include "../Queue/Queue.hpp"
class Stack 
{
    Node * top;
    Node * newValue;

    public: 
        Node * base;
        Stack();
        void push(int value);
        void print();
        int pop();
        ~Stack();
};