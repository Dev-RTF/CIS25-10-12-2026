#include "int_stack.h"


void IntStack::push(int value) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = top; // this is the top from the IntStack class
    top = newNode;
    count++;
}

IntStack::~IntStack() {
    // Walk the list and delete every node.
    while (top != nullptr) {
        Node* old = top;
        top = top->next;
        delete old;
    }
}

// handles the first value
IntStack::IntStack(int firstValue): top(nullptr), count(0) {
    push(firstValue);
}
        
// takes top off and returns its value
int IntStack::pop() {
    // make sure you're not popping when it's just the top item
    if (top != nullptr) {
        Node* newTop = top->next; // new top is now the second thing
        int oldTopValue = top->value;
        delete top; // delete old top
        count--;
        top = newTop;
        return oldTopValue;
    }
    return -1;
}

// returns the value of top
int IntStack::peek() {
    if (top != nullptr) {
        return top->value;
    }
    return -1;
}