#include <iostream>
#include "./header/Queue.hpp"

using namespace std;

void
addToList(int value, LinkedList * list);

int
printNumberOfFlask(int value, LinkedList * list);

int main() {
    LinkedList * list = new LinkedList();
    Queue * queue = new Queue();
    int value;
    char option;
    while (true)
    {
        cin >> value >> option;
        if(option == 'i')
        {
            queue->push(value);
            queue->print_list(*queue);
        }
        else if(option == 'r')
        {
            queue->first_out();
            printf("\n");
            queue->print_list(*queue);
            
        }
    }

    return 0;
}
