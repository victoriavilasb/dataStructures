#include <iostream>
#include "header/Tree/Tree.hpp"
#include "header/Stack/Stack.hpp"

using namespace std;

int main() {
    int value;
    Tree * tree = new Tree;
    Stack * stack = new Stack;
    char option;
    while(cin >> option)
    {
        if (option == 'i')
        {
            cin >> value;
            stack->push(value);
        } 
        else if (option == 'p')
        {
            stack->print();
        }
    }
    return 0;
}