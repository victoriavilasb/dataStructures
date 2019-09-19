#include <iostream>
#include "./header/LinkedList.hpp"

using namespace std;

void
addToList(int value, LinkedList * list);

int
printNumberOfFlask(int value, LinkedList * list);

int main() {
    LinkedList * list = new LinkedList();
    int value;
    char option;
    while (true)
    {
        cin >> value >> option;
        if(option == 'i')
        {
            list->add_list(value);
            addToList(value, list);
            list->print_list(*list);
        }
        else
        {
            cout << printNumberOfFlask(value, list) << endl;
        }
    }

    cout << list->get_length() << endl;
    return 0;
}

void
addToList(int value, LinkedList * list)
{
}

int
printNumberOfFlask(int value, LinkedList * list)
{
    return 0;
}