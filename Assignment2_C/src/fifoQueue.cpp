#include <iostream>
#include "fifoQueue.h"

using namespace std ;

int queueSize;

queueList :: queueList(int queuesize) 
{
    queueSize = queuesize;
    front = back = NULL ;
    currentIndex = 0 ;
}

bool queueList :: enqueue(int value)
{
    queueNode* myNode = new(queueNode);
    myNode->value = value;

    if (front == NULL) //If the que is empty.
    {
        myNode->next = myNode->prev = myNode;
        front = back = myNode;
        currentIndex += 1; 
        return true;
    }
    else
    // The que is not empty we need to insert from front
    {
        myNode->next = front ;
        myNode->prev = back ;
        front->prev = myNode;
        back->next = myNode;
        front = myNode; // Update front pointer
        currentIndex += 1; 
        return true; 
    }
}

bool queueList :: dequeue(void)
{
    queueNode *i = back->prev;
    i->next = front ;
    front->prev = i ;
    back = i ;
    currentIndex -= 1;
    return true;
}

void queueList :: printOut(void)
{
    queueNode *i = front;
    if (currentIndex == 0) // This means the que has only one value
    {
        cout << i->value << endl ;
    }
    else 
        do
        {
            cout << "The Value " << i->value << endl ;
            i = i->next;
        }
        while (i->next != front->next);
}

bool queueList :: isEmpty()
{
    if (currentIndex == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool queueList :: isFull()
{
    cout << queueSize << currentIndex << endl ;
    if (currentIndex >= queueSize)
    {
        return true;
    }
    else
     return false;
}