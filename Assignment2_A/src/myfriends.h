#include <iostream>
#include <list>
#include <string>

using namespace std ;

class friendsNode
{
public:
	string name;
	string birthdate;
	string address;
	string contactNumber;
	friendsNode* next;
	friendsNode* previous;
};

class friendsList
{
private:
	friendsNode* head;

public:
	friendsList(void) { head = NULL;}
	~friendsList(void) ;
	friendsNode *AddFirstFriend (friendsNode *, string , string , string , string );
	bool IsEmpty() ;

}