// IntStack.h
#ifndef INT_STACK_H
#define INT_STACK_H
#include "Node.h"

class IntStack {
    private:
        Node* top; // composition: hold the top Node's address
        int count;
    public:
        IntStack(int firstValue);
        ~IntStack();
        void push(int value);
        
        // takes top off and returns its value
        int pop();
        
        // returns the value of top
        int peek();

};

#endif