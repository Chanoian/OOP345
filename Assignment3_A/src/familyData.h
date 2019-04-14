#include <iostream>
#include <string>

using namespace std ;

class familyData
{
private:
    familyData *root;
    familyData *lChild ;
    familyData *rChild;
    void printOut(familyData *);
    void makeDeletion(familyData *&);
    void deleteNode(string, familyData *&);

public:
    int age;
    float height;
    string name;
    familyData();
    void setAge(string);
    void setName(string);
    void setHeight(string);
    bool insertFamilyMember(familyData *);
    void deleteFamilyMember(string);
    bool searchForFamilyMember(string);
    bool updateFamilyMember(familyData *);
    void displayFamilyMemebers()
    {
        printOut(root);
    };
};