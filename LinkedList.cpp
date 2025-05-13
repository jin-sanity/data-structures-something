#include "LinkedList.h"

void LinkedList::insertAtStart(int newStartData)
{
    // Make the new Node to be inserted
    Node* newNode = new Node();
    newNode->data = newStartData;
    
    // See whether or not something is already in head
    if (this->head == nullptr)
    {
    // If not, then we just assign head as a new node using newStartData
        head = newNode;
    }
    // But if so, we have to keep track of the previous head
    // This is done by using the next/prev pointers
    else
    {
        this->head->prev = newNode;
        newNode->next = this->head;
        this->head = newNode;
        std::cout << "Added a node and the head value is: " << this->head->data << '\n';
        std::cout << "Previous head before it was: " << this->head->next->data << "\n\n";
    }
}
