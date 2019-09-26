#include <iostream>
#include "./header/Queue.hpp"

using namespace std;

void
addToList(int value, LinkedList * list);

int
calculatesFlasks(int value, LinkedList * list);

int main() {
    LinkedList * list = new LinkedList();
    int value;
    char option;
    while (cin >> value >> option)
    {
        if(option == 'i')
        {
            list->push(value);
            list->print();
        }
        else if(option == 'r')
        {
            list->remove_by_value(value);
            list->print();
        }
        else if(option == 'p')
        {
            printf("%i\n", calculatesFlasks(value, list));
        }
    }

    return 0;
}

int 
calculatesFlasks(int value, LinkedList * list)
{
    Queue * log_queue = new Queue();
    int sum, sub, times;
    Node * it = list->head;
    int op_value = 0;
    
    times = 1;
    while(it)
    {
        sum = it->value;
        if(sum == value)
        {
            return times;
        }
        else
        {
            log_queue->push(sum);
            it = it->next;
        }

    }
    
    do 
    {
        it = list -> head;
        op_value = log_queue->first_out();

        times+=1;
        while(it) 
        {
            sum = op_value + it->value;
            sub = op_value - it->value;
            if(sum == value || sub == value)
            {
                return times;
            }
            else
            {
                log_queue->push(sum);
                log_queue->push(sub);
            }
            it = it -> next;
        }
    } 
    while(log_queue);

    return 0;
}
