#include "Book.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std ;
Book :: Book ()
{
}

Book :: Book(string new_author, string new_title, string new_date)
{
    setData(new_author, new_title, new_date);
}

void Book :: setData(string new_author, string new_title, string new_date)
{
    author = new_author ;
    title = new_title ;
    date = new_date ;
}

string Book :: getAuthor() const
{
    return author ;
}

string Book :: getTitle() const 
{
    return title ;
}

string Book :: getDate() const
{
    return date ;
}

bool operator < (const Book &book1, const Book &book2)
{
	return (book1.author < book2.author);
}

