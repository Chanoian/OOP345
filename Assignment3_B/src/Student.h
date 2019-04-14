#include <iostream>
#include <string>

const int STUDENT_NUMBER = 64;

using namespace std;

class Student
{
public:
    int Id;
    string name;
    float mark;
    Student(int Id, string name, float mark)
    {
    this->Id = Id;
    this->name = name;
    this->mark = mark;
    }
};


class HashMap
{
private:
    Student **table;

public:
    HashMap();
    int HashFunc(int);
    void Insert(int , string , float);
    int Search(int);
    void Remove(int);
    void Display(int);
    ~HashMap();
};
