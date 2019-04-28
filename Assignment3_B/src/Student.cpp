#include <iostream>
#include <string>
#include "Student.h"



HashMap::HashMap()
{
    table = new Student *[STUDENT_NUMBER];
    for (int i = 0; i < STUDENT_NUMBER; i++)
    {
        table[i] = NULL;
    }
}

int HashMap::HashFunc(int Id)
{
    return Id % STUDENT_NUMBER;
}

void HashMap::Insert(int Id, string name, float mark)
{
    int hash = HashFunc(Id);
    while (table[hash] != NULL && table[hash]->Id != Id)
    {
        hash = HashFunc(hash + 1);
    }
    if (table[hash] != NULL)
        delete table[hash];
    table[hash] = new Student(Id, name, mark);
}

int HashMap::Search(int Id)
{
    int hash = HashFunc(Id);
    while (table[hash] != NULL && table[hash]->Id != Id)
    {
        hash = HashFunc(hash + 1);
    }
    if (table[hash] == NULL)
        return -1;
    else
        return table[hash]->Id;
}

void HashMap::Remove(int Id)
{
    int hash = HashFunc(Id);
    while (table[hash] != NULL)
    {
        if (table[hash]->Id == Id)
            break;
        hash = HashFunc(hash + 1);
    }
    if (table[hash] == NULL)
    {
        cout << "No Element found at key " << Id << endl;
        return;
    }
    else
    {
        delete table[hash];
    }
    cout << "Element Deleted" << endl;
}

void HashMap::Display(int Id)
{
    int hash = HashFunc(Id);
    if (table[hash] == NULL)
        cout << " The Student Information is not in the list" << endl ;
    else
    {
        cout <<"The Mark " << table[hash]->mark << endl ;
        cout <<"The Name " <<  table[hash]->name << endl ;
    }
}
