#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int index;
    string id_number;
    Node *next;
};

class IdList
{
  private:
    int hash(string);

  public:
    void idList();
    void insertNewMember(string);
};