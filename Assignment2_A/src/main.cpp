#include <iostream>
#include <list>
#include <string>
#include "myfriends.h"

using namespace std ;


int main() 
{
    int choice ;
    string name , birthdate, address, contactNumber;
    friendsList myFriendsList;
    while (1)
    {
        cout << "1- Enter The First Friend Information" << endl ;
        cout << "2- Enter another Friend Information" << endl ;
        cout << "3- Print All the friends information in thee List" << endl ;
        cout << "4- Delete a Friend By First Name" << endl ;
        cout << "5- Search for specific friend by its First Name and Return if its found or not" << endl ;
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
                myFriendsList.createList(name, birthdate, address, contactNumber);
                break ;

            case 2:
                cout<<"Enter Friend Name to be inserted: " << endl ;
                cin.ignore();
                getline(cin, name);
                cout<<"Enter Birthdate to be inserted: " << endl ;
                cin.ignore();
                getline(cin, birthdate);
                cout<<"Enter Address to be inserted: " << endl ;
                cin.ignore();
                getline(cin, address);
                cout<<"Enter contact Number to be inserted: " << endl ;
                cin.ignore();
                getline(cin, contactNumber);
                myFriendsList.createList(name, birthdate, address, contactNumber);
                break ;
            case 3:
                myFriendsList.displayFriendsList() ;
                break;
            case 4:
                cout << "Insert the Friend Name which you want to delete" << endl ;
                cin.ignore();
                getline(cin, name);
                myFriendsList.deleteFriend(name);
                break;
            case 5:
                cout <<" Insert friend name to search for it" << endl ;
                cin.ignore();
                getline(cin, name);
                bool found ;
                found = myFriendsList.searchFriend(name);
                if (found == true)
                {
                  cout << " The Friend Record found ";
                }
                else 
                {
                    cout << " The friend record is not found";
                }
                cin.ignore();
                break ;
            default:
                exit(0); 
                 break;
        }
    }
    
}