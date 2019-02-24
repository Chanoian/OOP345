#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include "Book.h"

using namespace std ;
    int choice ;
    vector <Book> ::iterator iter ;
    vector <Book> libraryVector;
    string author , title , date ;

void PrintBooks (vector<Book> &bookdata)
{
    for (iter = bookdata.begin(); iter != bookdata.end(); ++iter)
        {
            cout <<"==============" << endl ;
            cout <<"Author Name " << iter->getAuthor() << endl;
            cout <<"Title Name " << iter->getTitle() << endl;
            cout <<"Date " << iter->getDate() << endl;
            cout <<"==============" << endl ;
        }
}

void SortBooks(vector<Book> &libraryVector)
{
    sort(libraryVector.begin(), libraryVector.end());
}

int main() 
{
    Book bookObj ;
    while(1)
    {
        cout << "Enter your Choice: " << endl ;
        cout << "1: Enter to Create New Book Entry: " << endl ;
        cout << "2: To Print out the list of the Books: " << endl ;
        cout << "3: Quit the Menu: " << endl ; 
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter Author Name to be inserted: ";
                cin.ignore();
                getline(cin, author);
                cout<<"Enter Book Title to be inserted: ";
                getline(cin, title);
                cout<<"Enter Book Date to be inserted: ";
                getline(cin, date);
                bookObj.setData(author, title, date) ;
                libraryVector.push_back(bookObj) ;
                break ;
            case 2:
                SortBooks(libraryVector);
                PrintBooks (libraryVector);
                break;
            case 3:
                cout << "Exiting" << endl ;
                exit(0);
                break;
            default:
                exit(0);
                break ;    
        }
    }
    return 0 ;
}