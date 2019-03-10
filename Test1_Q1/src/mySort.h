#include <iostream>
#include <list>

#ifndef MYSORT_H
#define MYSORT_H

using namespace std ;

template <typename T>
class mySort
{
private:
    int counter;
    T *array;

public:
    mySort(list<T>);
    void sortAlgorithm();
    void mySwap(list<T>, list<T>);

};

#endif