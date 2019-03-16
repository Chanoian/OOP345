#include <iostream>
#include "myfriends.h"

using namespace std ;

string name , birthdate, address, contactNumber;

friendsList::friendsList (void)
{
	head = NULL;
}

void friendsList::createList(string name , string birthdate, string address, string contactNumber)

{
    friendsNode *i, *temp;
    temp = new(friendsNode); 
    temp->name = name;
	temp->birthdate = birthdate;
	temp->address = address;
	temp->contactNumber = contactNumber;
    temp->next = NULL;
    if (head == NULL) // This mean it's the first Node on the List
    {
        temp->prev = NULL;
        temp->next = NULL;
        head = temp;
    }
    else
    {
        i = head;
        while (i->next != NULL)
            i = i->next;
        i->next = temp;
        temp->next = NULL;
    }
}


void friendsList::displayFriendsList()
{
    friendsNode *i;
    if (head == NULL)
    {
	    cout<<"List empty,nothing to print"<<endl;
        return;
    }
    i = head;
    while (i != NULL)
    {
        cout<<"The Name " << i->name<<endl ;
        cout<<"The address " <<  i->address <<endl ;
        cout<<"The Contact Number " <<  i->contactNumber <<endl ;
        cout<<"The Birthdate " << i->birthdate<<endl ;
        i = i->next;
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
    friendsNode  *i = head;
    while (i != NULL)
    {
        if (i->name == name)
        {
            return true ;
        }
        i = i->next ;
    }
    return false;
}