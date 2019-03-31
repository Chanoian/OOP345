#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Person
{
    int ID;
    string name;
    Person *left=NULL;
    Person *right=NULL;
};

class linearContainer
{
  private:
    vector<Person> myRecord;

  public:
    void insertPerson(Person *);
    void deletePerson(int);
    bool searchRecord(int);
    void showPersonRecords(void);
};

class hashTable
{
};

class binaryTree
{
  private:
    void makeDeletion(Person *&);
    void displayRecordInOrder(Person *);
    void deleteNode(int, Person *&);

  public:
    Person *root;
    binaryTree(void);
    void insertPerson(Person *);
    void deletePerson(int Id);
    void showPersonRecords(void)
    {
        displayRecordInOrder(root);
    }
    bool searchPerson(Person *);
};