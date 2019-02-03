/*
* C++ Program to Implement Map in Stl
*/
#include <iostream>
#include <map>
#include <string>
#include <cstdlib>
#include <iterator>
using namespace std;

class myMap
{
    public:
    string myKey , myValue ;
    myMap(string initKey, string initValue)
    {
       insertItem(initKey, initValue);
    }
    
    ~myMap();
    bool insertItem(string myKey, string myValue)
    {
        mp.insert(pair<string, string>(myKey, myValue));
        return true;
    }

    bool deleteItem(string myKey)
    {
        mp.erase(myKey);
        return true ;
    }

    int sizeMap()
    {
        int sizeofmap ;
        sizeofmap = mp.size();
        return sizeofmap ;
    }
    bool findItem(string myKey)
    {
        map<string, string> ::iterator iter = mp.begin();
        iter = mp.find(myKey); 
        if (iter == mp.end())
        {
            return false ;
        }
        else 
            return true ;
    }
    int numberOfValuesAgainstKey();
    bool exitMap();
    private:
     map<string, string> mp ;

};
