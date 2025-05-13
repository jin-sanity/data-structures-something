#include <iostream>
#include "LinkedList.h"

int main()
{
    // Declare a LinkedList to demonstrate that there are no compile/runtime errors
    LinkedList ll;
    ll.insertAtStart(5);
    ll.insertAtStart(4);
    ll.insertAtStart(3);
    ll.insertAtStart(2);

    std::cout << "Ran without issue.\n";
}