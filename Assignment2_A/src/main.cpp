#include <iostream>
#include <list>
#include <string>
#include "myfriends.h"

using namespace std ;


int main() 
{
    int choice ;
    string name , birthdate, address, contactNumber;
    friendsNode * begin = NULL;
    while (1)
    {
        cout << "1- Enter The First Friend Information" << endl ;
        cout << "2- Enter another Friend Information" << endl ;
        cout << "3- Delete Friend Information By Index" << endl ;
        cout << "4- Search for Friend By First Name" << endl ;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter Friend Name to be inserted: " << endl ;
                cin.ignore();
                getline(cin, name);
                cout<<"Enter Birthdate to be inserted: " << endl ;
                cin.ignore();
                getline(cin, birthdate);
                cout<<"Enter Address to be inserted: " << endl ;
                cin.ignore();
                getline(cin, address);
                cout<<"Enter contact Number to be inserted: ";
                cin.ignore();
                getline(cin, contactNumber);
                friendsList.AddFirstFriend(begin, name, birthdate, address, contactNumber);
                break ;
            default:
                exit(0); 
                 break;
        }
    }
    
}