#include <iostream>
#include "Stack.h"


template <typename T>
Stack <T> :: Stack ()
{
    stackPtr = new T[10];
    size = 10;
    top = - 1;
}

// template <typename T>
// Stack <T> :: ~Stack ()
// {
//     delete [] stackPtr;
// }

template <typename T>
Stack<T> :: Stack (int s)
{
    stackPtr = new T[s];
    size = s;
    top = - 1;
}

template <typename T>
bool Stack<T> :: isEmpty()
{
    return (top==-1);
}

template <typename T>
bool Stack<T> :: isFull()
{
    return (top==size-1);
}

template <typename T>
bool Stack<T> :: push (T pushValue)
{
    if(!isEmpty())
    {
        stackPtr[++top] = pushValue;
        return true;
    }
    return false;
}

template <typename T>
bool Stack<T> :: pop()
{
    if(!isEmpty())
    {
        stackPtr[top--];
        return true;
    }
    return false;
}