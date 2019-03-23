#include <iostream>
#include <list>
#include <string>
#include "fifoQueue.h"

using namespace std ;

int main()
{
    int choice, queueSize, queueMember ;
    cout << "Insert the Size of the Queue you want to Create " << endl ;
    cin >> queueSize ;
    queueList myQueue(queueSize);
    while (1)
    {
        cout << "1- Push a new Member to the Queue " << endl ;
        cout << "2- Dequeue the last  member from the Queue" << endl ;
        cout << "3- Check if the Queue is Empty" << endl ;
        cout << "4- Check if the Queue is Full" << endl ;
        cout << "5- Print Out The Queue Values" << endl ;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout <<"Insert The Value " << endl ;
                cin.ignore();
                cin >> queueMember ;
                bool result ;
                result= myQueue.enqueue(queueMember);
                if (result == true)
                {
                    cout << queueMember <<" Pushed  Successfuly" << endl;
                }
                else cout << queueMember <<" Failed to Push" << endl;
                cin.ignore();
                break;  
            case 2:
                myQueue.dequeue() ;
                cin.ignore();
                break ;
            case 3:
                bool isEmpty ;
                isEmpty = myQueue.isEmpty();
                if (isEmpty == true)
                {
                    cout << "the Queue is Empty" <<endl ;
                }
                else 
                {
                    cout <<"the Queue is not empty" <<endl ;
                }
                break;
            case 4:
                bool isFull ;
                isFull = myQueue.isFull();
                if (isFull == true)
                {
                    cout << "the Queue is Full" <<endl ;
                }
                else 
                {
            cout <<"the Queue is not Full" <<endl ;
                }
                break;
            case 5:
                myQueue.printOut() ;
                break;
            default:
                exit(0); 
                break;    
        }
    }
}   