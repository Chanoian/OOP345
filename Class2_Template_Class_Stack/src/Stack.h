#include <iostream>

#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack
{
private:
    int size;
    int top;
    T *stackPtr ;
    
public:
    Stack();
    ~Stack();
    Stack(int);
    bool isEmpty();
    bool isFull();
    bool pop();
    bool push(T);
};

#endif