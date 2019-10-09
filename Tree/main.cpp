#include <iostream>
#include "./header/Tree.hpp"

using namespace std;

int 
main() 
{
    int value;
    Tree * tree = new Tree;
    char option;
    while(cin >> option)
    {
        if (option == 'i')
        {
            cin >> value;
            tree->insert_in_order(value);
        } 
        else if (option == 'p')
        {
            tree->print_tree();
        }
    }
    return 0;
}