#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

using namespace std;

class Book
{
public:
    Book () ;
    Book(string , string , string );
    void setData(string , string , string );
	string getAuthor() const;
    string getTitle() const;
    string getDate() const;
    friend bool operator< (const Book &book1, const Book &book2);
private:
	string author, title, date;
};

#endif
