#include <iostream>
#include "Student.h"


void main()
{
    HashMap myHashMap;
    int choice, Id;
    string name;
    float mark;

    while (1)
    {
        cout << "1- Insert a new Student Information to the Record " << endl;
        cout << "2- Remove a Student information from the Record " << endl;
        cout << "3- Search for a Student information Inside the Record " << endl;
        cout << "4- Display the Student Record Information" << endl;
        cout << "5- Exit From the Application " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Insert The Name of the Student  " << endl;
            cin.ignore();
            cin >> name;
            cout << "Insert The Id  of the Student  " << endl;
            cin.ignore();
            cin >> Id;
            cout << "Insert The Mark  of the Student  " << endl;
            cin.ignore();
            cin >> mark;
            myHashMap.Insert(Id, name, mark);
            break;
        case 2:
            cout << "Insert Person ID to delete it from the Records" << endl;
            cin.ignore();
            cin >> Id ;
            myHashMap.Remove(Id);
            break;
        case 3:
            int searchResult ;
            cout << "Insert The Id of the Student To Search " << endl;
            cin.ignore();
            cin >> Id;
            searchResult = myHashMap.Search(Id);
            if (searchResult == -1)
                cout << "The Student Record Not Found" << endl;
            else 
                cout << "Student Record Found" << endl ;
            break;
        case 4:
            cout << "Insert The Id of the Student To Display the Mark and the Name " << endl;
            cin.ignore();
            cin >> Id;
            myHashMap.Display(Id) ;
            break;
        case 5:
            exit(0);
            break;
        default:
            break;
        }
    }
}