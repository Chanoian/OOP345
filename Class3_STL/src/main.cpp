/*
* C++ Program to Implement Map in Stl
*/
#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <stdio.h>

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
        iter = mp.find(myKey); 
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
        numOfValues = mp.count(myKey); 
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
     map<string, string>::iterator it, it1;
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
            // case 3:
            case 4:
                getchar();
                cout<<"Enter element to be counted: ";
                getline(cin, key);
            case 5:
                cout << "Size of the map is " << booklibrary.sizeMap() << endl ;
            case 6:
                booklibrary.displayMap();
                
            case 7:
                exit(1);
                break;
            default:
                exit(1) ;
        }
    }
    return 0 ;
}