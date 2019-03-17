#include <iostream>

using namespace std ;

struct stackNode 
{
    stackNode *next;
    int value;
};

class stackList
{
private:
    stackNode *head;
    int stackSize ;
    int currentIndex ;
public:
    stackList (int) ;
    bool push(int);
    bool pop();
    bool isEmpty(void);
    bool isFull(void);
    void printOut(void) ;
};