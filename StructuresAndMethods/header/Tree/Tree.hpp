#include <iostream>
#include "./Node.hpp"

class Tree {
    Node * newChild;
    public: 
        Node * root;
        Tree();
        ~Tree();
        void print_tree();
        void insert_in_order(int value);
};