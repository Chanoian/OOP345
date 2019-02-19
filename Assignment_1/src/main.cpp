#include <iostream>
#include <string>
#include "Book.h"
#include <vector>


int main() 
{
    int choice ;
    vector <Book> libraryVector;
    string author , title , date ;
    while(1)
    cout << "Enter your Choice: " << endl ;
    cout << "1: Enter to Create New Book Entry: " << endl ;
    cout << "2: To Print out the list of the Books: " << endl ;
    cout << "3: Quit the Menu: " << endl ; 
    cin>>choice;
    {
        switch(choice)
        {
            case 1:
                cout<<"Enter Author Name to be inserted: ";
                getline(cin, author);
                cout<<"Enter Book Title to be inserted: ";
                getline(cin, title);
                cout<<"Enter Book Date to be inserted: ";
                getline(cin, date);
                Book :: Book (author, title, date) ;
                libraryVector.push_back(Book) ;
                break ;
            case 2:
                break;
            case 3:
                cout << "Exiting" << endl ;
                exit(0);
                break;
            default:
                break ;
    }
    
}