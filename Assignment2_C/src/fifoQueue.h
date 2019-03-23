#include <iostream>

using namespace std ;

struct queueNode  
{
    queueNode *next;
    queueNode *prev ;
    int value;
};

class queueList
{
private:
    queueNode *front;
    queueNode *back;
    int stackSize ;
    int currentIndex ; //To memorize the size of the current Queue
    
public:
    queueList (int) ;
    bool enqueue(int);
    bool dequeue();
    bool isEmpty(void);
    bool isFull(void);
    void printOut(void) ;
};