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
	friendsNode* prev;
} ;

class friendsList
{
private:
	friendsNode* head;
public:
	friendsList(void);
	void createList(string, string, string, string);
    void displayFriendsList();
	void deleteFriend(string) ;
	bool searchFriend(string) ;
};