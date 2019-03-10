#include <iostream>
#include <map>
#include <iterator>
#include "Astrology.h"

int main() 

{
    map<string, Astorology> astroMap ;
    map<string, Astorology> :: iterator iter;
    string myStar, myDob, myDailyPrediction;
    int choice;
    while (1)
    {
        Astorology obj ;
        cout<<"\n---------------------"<<endl;
        cout<<"MAP Implementation in Stl"<<endl;
        cout<<"\n---------------------"<<endl;
        cout<<"1.Insert Element into the Map"<<endl;
        cout<<"2.Delete Element from the Map"<<endl;
        cout<<"3.Size of the Map"<<endl;
        cout<<"4.Print out the Map"<<endl;
        cout<<"5.Exit"<<endl;

        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                getchar() ;
                cout<<"Enter star Name to be inserted: ";
                getline(cin, myStar);
                obj.setStar(myStar);
                cout<<"Enter dob Name to be inserted: ";
                getline(cin, myDob);
                obj.setDob(myDob);
                cout<<"Enter DailyPrediction Name to be inserted: ";
                getline(cin, myDailyPrediction);
                obj.setDailyPrediction(myDailyPrediction);
                break ;
            case 2:
            case 3:
            cout << "Size of the map is " << astroMap.size() << endl ;
                break ;
            case 4:
                cout << "Show the astrology " << endl ;
                cout << " Star Name" << obj.getStar() << endl ;
                cout << " Dob Name" << obj.getDob() << endl ;
                cout << " Star Name" << obj.getStar() << endl ;
            case 5:
                cout << "Exiting" << endl ;
                exit(0);
                break;
        }
    }
    return 0;
}