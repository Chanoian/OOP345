#include <iostream>
#include <map>
#include <string>
#include <iterator>
using namespace std ;

int main() {

    multimap<string, string> mmp ;
    multimap<string, string>::iterator it, itr1;
    mmp.insert(pair<string, string>("Hello1", "Hello"));
    mmp.insert(pair<string, string>("Hello2", "Hello"));
    mmp.insert(pair<string, string>("Hello3", "Hello"));
    for(it = mmp.begin(); it!=mmp.end(); it++)
    {
        cout << (*it).first << "    "   <<  (*it).second << endl ;
    }
    
    int size = mmp.size() ;
    cout << "The Size of the Map is " << size << endl ;
    int maxSize = mmp.max_size() ;
    cout << "The Max Size of MMAp " << maxSize << endl ;
    itr1 = mmp.find("Hello1") ;
    cout << (*itr1).first << endl ;
    return 0 ;
}