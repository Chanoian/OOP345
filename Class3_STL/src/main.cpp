/*
* C++ Program to Implement Map in Stl
*/
#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class myMap
{
    public:
    string myKey , myValue ;
    myMap() ;
    myMap(string initKey, string initValue)
    {
       insertItem(initKey, initValue);
    }
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
        iter = mp.find(myKey); //mp.find returns and iterator or constant iterator
        if (iter == mp.end())
        {
            return false ;
        }
        else 
            return true ;
    }
    int numberOfValuesAgainstKey(string myKey)
    {
        int numOfValues ;
        numOfValues = mp.count(myKey); //mp.count returns 1 if the key is inside the map otherwise 0
        return numOfValues ;
    }
    void displayMap()
    {
        cout<<"Elements of the Map: ";
        for(it = mp.begin(); it != mp.end(); ++it)
            cout<<(*it).first<<" => "<<(*it).second<<endl;
        cout<<endl ;
    }
    private:
     map<string, string> mp ;
     map<string, string>::iterator it;
    
};

int main ()
{
    myMap booklibrary("first name", "book") ;
    int choice;
    string key, value ;
    while (1)
    {
        cout<<"\n---------------------"<<endl;
        cout<<"MAP Implementation in Stl"<<endl;
        cout<<"\n---------------------"<<endl;
        cout<<"1.Insert Element into the Map"<<endl;
        cout<<"2.Delete Element from the Map"<<endl;
        cout<<"3.Find Element in a Map"<<endl;
        cout<<"4.Count Elements with a specific key"<<endl;
        cout<<"5.Size of the Map"<<endl;
        cout<<"6.Display Map"<<endl;
        cout<<"7.Exit"<<endl;

        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                getchar() ;
                cout<<"Enter Author Name to be inserted: ";
                getline(cin, key);
                cout<<"Enter Book Title to be inserted: ";
                getline(cin, value);
                booklibrary.insertItem(key, value);
                break ;
            case 2:
                getchar() ;
                cout<<"Enter Author Name to be deleted: ";
                getline(cin, key);
                booklibrary.deleteItem(key) ;
                break;
            case 3:
                getchar();
                cout<<"Enter element to figure out if its found: ";
                getline(cin, key);
                if (booklibrary.findItem(key) == true)
                {
                    cout << " The Item found" << endl;
                }
                else
                    cout << " The Item is Not found" << endl ;
                break ;
            case 4:
                int numberOfValues ;
                getchar();
                cout<<"Enter element to be counted: ";
                getline(cin, key);
                numberOfValues = booklibrary.numberOfValuesAgainstKey(key);
                if (numberOfValues == 1)
                {
                    cout << " The Key found" << endl;
                }
                else 
                    cout << "The Key is not there" << endl ;
                break ;
            case 5:
                cout << "Size of the map is " << booklibrary.sizeMap() << endl ;
                break ;
            case 6:
                booklibrary.displayMap();
                break ;
            case 7:
                cout << "Exiting" << endl ;
                exit(0);
                break;
            default:
                exit(0);
        }
    }
    return 0 ;
}
