#include <iostream>
#include <list>
#include "mySort.h"

using namespace std;

template <typename T>
mySort <T> :: mySort( list<T> myList)
{
    array = *myList;
}

template <typename T>
void mySort <T> :: sortAlgorithm()
{
    array.sort();
}

template <typename T>
void mySort<T> :: mySwap(list<T> firstList , list<T> secondList)
{
    firstList.swap(secondList);
}
