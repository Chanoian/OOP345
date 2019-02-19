#include "Book.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std ;

class Book 
{
public:
    Book(string new_author, string new_title, string new_date)
    {
       setData(new_author, new_title, new_date);
    }

    void setData(string new_author, string new_title, string new_date)
    {
       author = new_author ;
       title = new_title ;
       date = new_date ;
    }

    string getAuthor() const
    {
        return author ;
    }

    string getTitle() const 
    {
        return title ;
    }

    string getDate() const
    {
        return date ;
    }

private:
    string author , title, date;
    vector <Book> libraryVector;
    
};