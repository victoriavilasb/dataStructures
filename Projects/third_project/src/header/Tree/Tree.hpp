#include <iostream>
#include "./NodeTree.hpp"

class Tree {
    NodeTree * newChild;
    public: 
        NodeTree * root;
        Tree();
        ~Tree();
        void print_recursive_pre_order(NodeTree * temp);
        void insert_in_order(word value);
};