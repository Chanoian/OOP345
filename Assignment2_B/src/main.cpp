#include <iostream>
#include <list>
#include <string>
#include "lifoStack.h"

using namespace std ;

int main()
{
    int choice, stackSize, stackMember ;
    cout << "Insert the Size of the Stack you want to Create " << endl ;
    cin >> stackSize ;
    stackList myStack(stackSize);
    while (1)
    {
        cout << "1- Push a new Member to the Stack " << endl ;
        cout << "2- Pop an existing member from the Stack" << endl ;
        cout << "3- Check if the Stack is Empty" << endl ;
        cout << "4- Check if the Stack is Full" << endl ;
        cout << "5- Print Out The Stack Values" << endl ;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout <<"Insert The Value " << endl ;
                cin.ignore();
                cin >> stackMember ;
                bool result ;
                result= myStack.push(stackMember);
                if (result == true)
                {
                    cout << stackMember <<" Pushed  Successfuly" << endl;
                }
                else cout << stackMember <<" Failed to Push" << endl;
                cin.ignore();
                break;  
            case 2:
                myStack.pop() ;
                cin.ignore();
                break ;
            case 3:
                bool isEmpty ;
                isEmpty = myStack.isEmpty();
                if (isEmpty == true)
                {
                    cout << "the Stack is Empty" <<endl ;
                }
                else 
                {
                    cout <<"the stack is not empty" <<endl ;
                }
                break;
            case 4:
                bool isFull ;
                isFull = myStack.isFull();
                if (isFull == true)
                {
                    cout << "the Stack is Full" <<endl ;
                }
                else 
                {
                    cout <<"the stack is not Full" <<endl ;
                }
                break;
            case 5:
                myStack.printOut() ;
                break;
            default:
                exit(0); 
                break;    
        }
    }
}   