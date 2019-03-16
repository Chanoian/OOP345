#include <iostream>
#include "myfriends.h"

using namespace std ;

string name , birthdate, address, contactNumber;

void friendsList::createList(string name , string birthdate, string address, string contactNumber)

{
    class friendsNode *s, *temp;
    temp = new(friendsNode); 
    temp->name = name;
	temp->birthdate = birthdate;
	temp->address = address;
	temp->contactNumber = contactNumber;
    temp->next = NULL;
    if (head == NULL)
    {
        temp->prev = NULL;
        head = temp;
    }
    else
    {
        s = head;
        while (s->next != NULL)
            s = s->next;
        s->next = temp;
        temp->prev = s;
    }
}

friendsList::friendsList (void)
{
	head = NULL;
}

void friendsList::addFriend(string name , string birthdate, string address, string contactNumber)
{
    if (head == NULL)
    {
        cout<<"First Create the list."<<endl;
        return;
    }
    class friendsNode *temp;
    temp = new (friendsNode);
    temp->prev = NULL;
    temp->name = name;
	temp->birthdate = birthdate;
	temp->address = address;
	temp->contactNumber = contactNumber;
    temp->next = head;
    head->prev = temp;
    head = temp;
    cout<<"Friend Inserted "<<endl;
}

void friendsList::displayFriendsList()
{
    struct friendsNode *q;
    if (head == NULL)
    {
	    cout<<"List empty,nothing to print"<<endl;
        return;
    }
    q = head;
    while (q != NULL)
    {
        cout<<"The Name " << q->name<<endl ;
        cout<<"The address " <<  q->address <<endl ;
        cout<<"The Contact Number " <<  q->contactNumber <<endl ;
        cout<<"The Birthdate " << q->birthdate<<endl ;
        q = q->next;
    };
}

void friendsList::deleteFriend(string name)

{
    friendsNode *tmp, *q;
    if (head->name == name)
    {
        tmp = head;
        head = head->next;  
        head->prev = NULL;
        cout<<"Element Deleted"<<endl;
        free(tmp);
        return;
    }
    q = head;
    while (q->next->next != NULL)
    {   
        if (q->next->name == name)  
        {
            tmp = q->next;
            q->next = tmp->next;
            tmp->next->prev = q;
            cout<<"Element Deleted"<<endl;
            free(tmp);
            return;
        }
        q = q->next;
    }
    if (q->next->name == name)    
    { 	
        tmp = q->next;
        free(tmp);
        q->next = NULL;
        cout<<"Element Deleted"<<endl;
        return;
    }
    cout<<"Element "<<name<<" not found"<<endl;
}

bool friendsList::searchFriend(string name)
{
    friendsNode  *q = head;
    while (q != NULL)
    {
            cout<<"Key: "<<name<<" : Record Name: "<<q->name<<endl;

        if (q->name == name)
        {
            return true ;
        }
        q = q->next ;
    }
    return false;
}