#include <iostream>

using namespace std ;

struct queNode  
{
    queNode *next;
    queNode *prev ;
    int value;
};

class queList
{
private:
    queNode *head;
    queNode *tail;
    int stackSize ;
    int currentIndex ;
public:
    queList (int) ;
    bool enqueue(int);
    bool dequeue();
    bool isEmpty(void);
    bool isFull(void);
    void printOut(void) ;
};