#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book
{
public:
	Book();
    Book(string new_author, string new_title, string new_date);
    void setData(string new_author, string new_title, string new_date);
	string getAuthor() const;
    string getTitle() const;
    string getDate() const;
    friend bool operator< (const Book &book1, const Book &book2);
private:
	string author, title, date;
};

#endif
