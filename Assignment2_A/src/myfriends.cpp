#include <iostream>
#include "myfriends.h"

using namespace std ;

friendsNode * friendsList :: AddFirstFriend (friendsNode *begin, string name, string birthdate, string address, string contactNumber)
{
	friendsNode *tempNode = new friendsNode();
	tempNode->name = name;
	tempNode->birthdate = birthdate;
	tempNode->address = address;
	tempNode->contactNumber = contactNumber;
	tempNode->next = NULL ;
	tempNode->previous = NULL;
	begin = tempNode ;
	return begin ;

}

friendsNode * friendsList *create_list(friendsNode *begin)
{
	int i,n,data_element;
	cout<<"Enter the number of nodes : ";
	cin>>n;
	begin=NULL;
	if(n==0)
		return begin;
	cout<<"Enter the element: ";
	cin>>data_element;
	begin=addtoemptylist(begin,data_element);
		
	for(i=2;i<=n;i++)
	{
		cout<<"Enter the element to be inserted : ";
		cin>>data_element;
		begin=addatendlist(begin,data_element);	
	}
	return begin;
}
