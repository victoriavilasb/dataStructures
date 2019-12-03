#include <iostream>
#include "./Tree.hpp"

using namespace std;

Tree::Tree()
{
    root = NULL;
}

void
Tree::insert_in_order(word _word)
{
    newChild = new NodeTree;
    newChild->_word = _word;
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
            if(_word.word_desc <= temp->_word.word_desc)
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
            else if(_word.word_desc >= temp->_word.word_desc)
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


// implementar pesquisa

// implementar remoção


void
Tree::print_recursive_pre_order(NodeTree * temp)
{
    if (temp == NULL) 
    {
        return;
    }
    else 
    {
        cout << temp->_word.word_desc << " ";
        print_recursive_pre_order(temp->child_left);
        print_recursive_pre_order(temp->child_right);
    }  
}
