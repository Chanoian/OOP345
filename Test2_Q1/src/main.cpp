#include <iostream>
#include "Person.h"

int main()
{
    linearContainer myLinearRecord;
    binaryTree myBinaryTreeRecord;
    string name;
    Person Obj;
    int choice, Id;
    while (1)
    {
        cout << "1- Push a new Person to the Record " << endl;
        cout << "2- Remove a Person from the Record " << endl;
        cout << "3- Search for a Person Inside the Record " << endl;
        cout << "4- Display the Record" << endl;
        cout << "5- Exit From the Application " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Insert The Name of the person  " << endl;
            cin.ignore();
            cin >> name;
            cout << "Insert The Id  of the person  " << endl;
            cin.ignore();
            cin >> Id;
            Obj.ID = Id;
            Obj.name = name;
            myBinaryTreeRecord.insertPerson(&Obj);
            myLinearRecord.insertPerson(&Obj);
            break;
        case 2:
            cout << "Insert Person ID to delete it from the Records" << endl ;
            cin.ignore();
            cin >> Id ;
            myBinaryTreeRecord.deletePerson(Id);
            myLinearRecord.deletePerson(Id);
            break;
        case 3:
            cout << "Insert The Id of the person To Search " << endl;
            cin.ignore();
            cin >> Id ;
            bool binaryResult, linearResult;
            binaryResult = myLinearRecord.searchRecord(Id);
            if (binaryResult)
            {
                cout << "The Record found " << endl;
            }
            else cout <<"The recod not found  " << endl ;
            break;
        case 4:
            cout << "The Linear Record " << endl;
            myLinearRecord.showPersonRecords();
            cout << "The Binary Tree Record " << endl;
            myBinaryTreeRecord.showPersonRecords();
            break;
        case 5:
            exit(0);
            break;
        default:
            break;
        }
    }
}