#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "Person.h"

using namespace std;

Person *treeNode;
vector<Person>::iterator iter;

binaryTree ::binaryTree(void)

{
    root = NULL;
}

void binaryTree ::insertPerson(Person *newPerson)
{
    Person *newNode = new (Person);
    newNode->name = newPerson->name;
    newNode->ID = newPerson->ID;
    if (root == NULL) // This means the Binary tree is empty.
    {
        root = newNode;
        //root->right = root->left = NULL;
    }
    else
    {
        Person *tempNode = root; //We will Use this node to traverse the Tree.
        while (tempNode != NULL)
        {
            if (newPerson->ID > tempNode->ID) //If the new value is greater
            {
                if (tempNode->right) // If the node exists
                    tempNode = tempNode->right;
                else
                    tempNode->right = newNode;
                break;
            }
            else if (newPerson->ID < tempNode->ID) // If the new Value is smaller
            {
                if (tempNode->left)
                    tempNode = tempNode->left;
                else
                    tempNode->left = newNode;
                break;
            }
            else
            {
                cout << "Duplicate Value Found" << endl;
                break;
            }
        }
    }
}

void binaryTree ::deletePerson(int Id)
{
    deleteNode(Id, root);
}

void binaryTree::displayRecordInOrder(Person *nodePtr)
{
    if (nodePtr)
    {
        displayRecordInOrder(nodePtr->left);
        cout <<"The Name "<< nodePtr->name << endl;
        cout <<"The ID " <<  nodePtr->ID << endl;
        displayRecordInOrder(nodePtr->right);

    }
}

void binaryTree::deleteNode(int Id, Person *&nodePtr)
{
    if (Id < nodePtr->ID)
        deleteNode(Id, nodePtr->left);
    else if (Id > nodePtr->ID)
        deleteNode(Id, nodePtr->right);
    else
        makeDeletion(nodePtr);
}

void binaryTree::makeDeletion(Person *&nodePtr)
{
    Person *tempNodePtr; // Temporary pointer, used in
    // reattaching the left subtree.
    if (nodePtr == NULL)
        cout << "Cannot delete empty node.\n";
    else if (nodePtr->right == NULL)
    {
        tempNodePtr = nodePtr;
        nodePtr = nodePtr->left;
        // Reattach the left child
        delete tempNodePtr;
    }
    else if (nodePtr->left == NULL)
    {
        tempNodePtr = nodePtr;
        nodePtr = nodePtr->right;
        // Reattach the right child
        delete tempNodePtr;
    }
    // If the node has two children.
    else
    {
        // Move one node the right.
        tempNodePtr = nodePtr->right;
        // Go to the end left node.
        while (tempNodePtr->left)
            tempNodePtr = tempNodePtr->left;
        // Reattach the left subtree.
        tempNodePtr->left = nodePtr->left;
        tempNodePtr = nodePtr;
        // Reattach the right subtree.
        nodePtr = nodePtr->right;
        delete tempNodePtr;
    }
}

void linearContainer ::insertPerson(Person *newPerson)
{
    myRecord.push_back(*newPerson);
}

void linearContainer ::deletePerson(int Id)
{
    for (iter = myRecord.begin(); iter != myRecord.end(); iter++)
    {
        if (iter->ID == Id)
        {
            myRecord.erase(iter);
        }
    }
}

bool linearContainer ::searchRecord(int Id)
{
    for (iter = myRecord.begin(); iter != myRecord.end(); iter++)
    {
        if (iter->ID == Id)
        {
            cout << iter->name << endl;
            return true;
        }
    }
    return false;
}

void linearContainer ::showPersonRecords(void)
{
    for (iter = myRecord.begin(); iter != myRecord.end(); iter++)
    {
        cout << "The Name " << iter->name << endl;
        cout << "The ID " << iter->ID << endl;
    }
}