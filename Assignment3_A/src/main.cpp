#include <iostream>
#include <string>
#include "familyData.h"

using namespace std;
int choice, age ;
string name ;
float height;
familyData myFamilyData ;

int main()
{
    while (1)
    {
        cout << "1- Insert a new Family Member  " << endl;
        cout << "2- Remove an existing Family Member " << endl;
        cout << "3- Search for a Family Member by Name " << endl;
        cout << "4- Display all the Family tree " << endl;
        cout << "5- Exit From the Application " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Insert The Name of the person  " << endl;
            cin.ignore();
            cin >> name;
            cout << "Insert The age of the person  " << endl;
            cin.ignore();
            cin >> age;
            cout << "Insert The height of the person  " << endl;
            cin.ignore();
            cin >> height;
            myFamilyData.age = age ;
            myFamilyData.name = name ;
            myFamilyData.height = height ;
            myFamilyData.insertFamilyMember(&myFamilyData);
            break;
        case 2:
            cout << "Insert Person name to delete it from the Records" << endl;
            cin.ignore();
            cin >> name ;
            myFamilyData.deleteFamilyMember(name);
            break;
        case 3:
            cout << "Insert The name of the person To Search " << endl;
            cin.ignore();
            cin >> name;
            if (myFamilyData.searchForFamilyMember(name) == true)
                cout << " The record found" << endl ;
            else   
                cout << "The record not found" << endl ;
            break;
        case 4:
            myFamilyData.displayFamilyMemebers();
            break;
        case 5:
            exit(0);
            break;
        default:
            exit(1);
            break;
        }
    }
}