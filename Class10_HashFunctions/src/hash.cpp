#include <iostream>
#include <vector>
#include "hash.h"

using namespace std;

string firstName;

void IdList ::idList()
{
    vector<Node> idList;
}

int IdList ::hash(string firstName)
{
    int value = 0;
    for (int i = 0; i < firstName.length(); i++)
        value += firstName[i];

    int result = value % 5;
    return result;
}

void IdList ::insertNewMember(string firstName)
{
    int index = IdList::hash(firstName);
}
