#include <iostream>
#include "./Tree.hpp"

using namespace std;

Tree::Tree()
{
    root = NULL;
}

void
Tree::insert_in_order(int value)
{
    newChild = new Node;
    Node * clean;
    newChild->value = value;
    newChild->child_left = NULL;
    newChild->child_right = NULL;
    if(root == NULL) 
    {
        root = newChild;
    }
    else
    {
        Node * temp = root;
        while(temp)
        {
            if(value < temp->value)
            {
                if(temp->child_left == NULL) 
                {
                    temp->child_left = newChild;
                    clean = temp;
                    delete clean;
                    break;
                }
                else 
                {
                    temp = temp->child_left;
                }
            } 
            else if(value > temp->value)
            {
                if(temp->child_right == NULL) 
                {
                    temp->child_right = newChild;
                    clean = temp;
                    delete clean;
                    break;
                }
                else 
                {
                    temp = temp->child_right;
                }
            }
            else {
                break;
            }
        }
    }
    
}

void
Tree::print_tree()
{
    Node * temp = root;
    while(temp)
    {
        cout << temp->value << endl;
        if(temp->child_left != NULL) 
        {
            temp = temp->child_left;
        }
        else
        {
            break;
        }
        
    }
    
}
