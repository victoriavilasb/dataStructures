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
        }
        else if(option == 'r')
        {
            list->remove_by_value(value);
            list->print();
        }
        else if(option == 'p')
        {
            cout << calculatesFlasks(value, list) << endl;
        }
    }

    return 0;
}

int 
calculatesFlasks(int value, LinkedList * list)
{
    Queue * log_queue_value = new Queue();
    Queue * log_queue_times = new Queue();
    int sum, sub, op_value, op_times;
    Node * it = list->head;
    while(it)
    {
        sum = it->value;
        if(sum == value)
        {
            return 1;
        }
        else
        {
            log_queue_value->push(sum);
            log_queue_times->push(1);
            it = it->next;
        }
    }
    
    do
    {
        it = list->head;
        op_value = log_queue_value->first_out();
        op_times = log_queue_times->first_out();
        while(it) 
        {
            sum = op_value + it->value;
            sub = op_value - it->value;
            if(sum == value || sub == value)
            {
                return op_times+1;
            }
            else if(sub>0)
            {
                log_queue_value->push(sub);
                log_queue_times->push(op_times+1);
            }
            log_queue_value->push(sum);
            log_queue_times->push(op_times+1);
            it = it->next;
        }
    } 
    while(log_queue_value);

    return 0;
}
