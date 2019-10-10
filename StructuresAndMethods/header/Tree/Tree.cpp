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
    newChild = new NodeTree;
    newChild->value = value;
    newChild->child_left = NULL;
    newChild->child_right = NULL;
    if(root == NULL) 
    {
        root = newChild;
    }
    else
    {
        NodeTree * temp = root;
        while(temp)
        {
            if(value <= temp->value)
            {
                if(temp->child_left == NULL) 
                {
                    temp->child_left = newChild;
                    break;
                }
                else 
                {
                    temp = temp->child_left;
                }
            } 
            else if(value >= temp->value)
            {
                if(temp->child_right == NULL) 
                {
                    temp->child_right = newChild;
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

/* 
    lista o nó raiz, seguido de suas subárvores 
    (da esquerda para a direita), 
    cada uma em pré-ordem.
*/
void
Tree::print_recursive_pre_order(NodeTree * temp)
{
    if (temp == NULL) 
    {
        return;
    }
    else 
    {
        cout << temp->value << " ";
        print_recursive_pre_order(temp->child_left);
        print_recursive_pre_order(temp->child_right);
    }  
}
