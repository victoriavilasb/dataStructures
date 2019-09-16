#include <iostream>
#include "./header/LinkedList.hpp"

using namespace std;

int main() {
    LinkedList * list = new LinkedList();

    cout << list->get_length() << endl;
    return 0;
}