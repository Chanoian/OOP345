#include <iostream>
#include "lifoStack.h"

int stacksize , x;

stackList :: stackList(int stacksize)
{
    if (stacksize <= 0 )
    {
        cout << "Insert a Positive Value" << endl ;
        return ;
    }
    head = NULL;
    currentIndex = 0 ;
    stackSize = stacksize;
}

bool stackList :: push(int x)
{
    cout <<"Before Current Index " << currentIndex << " stackSize " << stackSize << endl ;
    if (currentIndex >= stackSize) 
    {
        cout << " The Stack is full" << endl;
        return false;
    }
    else
    {
        stackNode * temp, *i ;
        temp = new (stackNode);
        temp->value = x;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            head->next = NULL;
        }
        else
        {
            i = head;
            while (i->next != NULL)
                i = head->next;
            i->next = temp ;
        }
    currentIndex ++ ;
    cout <<"Before Current Index " << currentIndex << " stackSize " << stackSize << endl ;
    return true;
    }
}


bool stackList ::pop (void)
{
    if (currentIndex == 0)
    {   
        cout << " The Stack is Empty" << endl;
        return false ;
    }
    else
    {
        stackNode *i ;
        i = head ;
        for ( int j=1 ; j<currentIndex-1 ; j++)
        {
            i=i->next;
        }    
        i->next = NULL ;
    }
    return true;   
}

bool stackList :: isFull (void)
{
    if (currentIndex >= stackSize)
    {
        return true;
    }
    return false;
}

bool stackList :: isEmpty (void)
{
    if (currentIndex == 0)
    {
        return true;
    }
    return false;
}

void stackList :: printOut(void)
{
    stackNode *i ;
    if (head == NULL)
    {
	    cout<<"Stack is empty,nothing to print"<<endl;
        return;
    }
    i = head;
    while (i != NULL)
    {
        cout<<"The Value " << i->value<<endl ;
        i = i->next;
    };
}