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
    int stackSize ;
    int currentIndex ;
    
public:
    queList (int) ;
    bool push(int);
    bool pop();
    bool isEmpty(void);
    bool isFull(void);
    void printOut(void) ;
};