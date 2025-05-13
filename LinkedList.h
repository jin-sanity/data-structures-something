#include <iostream>

// Note: Should be using a namespace; this implementation is purely for oversimplification
class Node
{
public:
    int data = 0;
    Node* prev = nullptr;
    Node* next = nullptr;
    void insertNext(newData);
    void insertPrev(newData);
}

class LinkedList
{
private:
    Node* head = nullptr;
    Node* tail = nullptr;

public:
    Node* getStartNode()
    {
        return head;
    }

    Node* getEndNode()
    {
        return tail;
    }

    void insertAtStart(int newStartData);

    void insertAtEnd(int data)
    {
        std::cout << "Someone please implement this too!\n";
    }

    void printList()
    {
        std::cout << "Print out the whole list starting with head!\n";
    }

};
