#include <iostream>
#include <list>
#include <iterator>
#include "mySort.h"

list<int> intList;
list<int> :: iterator intIter;
list<float> floatList;
list<float> :: iterator floatIter;
list<char> charList = {'C', 'B','A', 'D', 'F', 'E'};
list<char> :: iterator charIter;

int main() 
{
    mySort<int> intObj(list<int> intList);
    mySort<float> floatObj(list<float> floatList) ;
    mySort<char> charObj(list<char> charList) ;

    for (int i = 0; i < 10; ++i) 
    { 
        intList.push_back(i);  
    }

    for (float f = 0.0; f< 11 ; ) 
    { 
        floatList.push_back(f);  
        f+=1.1;
    }

    for(charIter = charList.begin(); charIter != charList.end(); ++charIter)
    { 
        cout << '\t' << *charIter; 
    cout << '\n'; 
    }
    return 0;
}