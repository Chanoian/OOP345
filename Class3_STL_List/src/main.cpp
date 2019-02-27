#include <iostream>
#include <list>
#include <iterator>

using namespace std ;

list <int> myList ;
list <int> :: iterator iter;


void printList(list<int> *inputList)
{
    for(iter = inputList->begin() ; iter !=inputList->end() ; ++iter)
    {
        cout << *iter ;
    }
    cout << endl ;

}

int main()
{
    for (int i = 0 ; i < 10 ; i++ )
    {
        myList.push_back(i) ;
    }
    printList( &myList);

    myList.reverse();
    printList( &myList);
    int size = myList.size();
    cout << size << endl ;
    myList.sort() ;
    printList( &myList);
    int first = myList.front();
    cout << first << endl ;
    int last = myList.back();
    cout << last << endl ;


    return 0 ;
}


