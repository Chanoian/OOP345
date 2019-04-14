#include <iostream>
#include "familyData.h"

using namespace std;

familyData ::familyData()
{
    root = NULL;
}


bool familyData ::insertFamilyMember(familyData *newMember)
{
    familyData *newNode = new (familyData);
    newNode->name = newMember->name;
    newNode->height = newMember->height;
    newNode->age = newMember->age;
    newNode->lChild = newNode->rChild = NULL;
    if (root == NULL) // This means the Binary Tree is empty
    {
        root = newNode;
        return true ;
    }
    else
    {
        familyData *tempNode = root;
        while (tempNode != NULL)
        {
            if (newNode->name > tempNode->name)
            {
                if (tempNode->rChild) // If the right node exists
                    tempNode = tempNode->rChild;
                else
                    tempNode->rChild = newNode;
                return true;
            }
            else if (newNode->name < tempNode->name)
            {
                if (tempNode->lChild) // If the left node exists
                    tempNode = tempNode->lChild;
                else
                    tempNode->lChild = newNode;
                return true;
            }
            else
                cout << " Duplicate Node " << endl;
            return false;
        }
    }
    return false ;
}

void familyData::printOut(familyData *nodePtr)
{
    if (nodePtr)
    {
        printOut(nodePtr->lChild);
        cout <<"The Name "<< nodePtr->name << endl;
        cout <<"The Age  " <<  nodePtr->age << endl;
        cout <<"The Height  " <<  nodePtr->height << endl;
        printOut(nodePtr->rChild);
    }
}

 bool familyData:: searchForFamilyMember(string name)
 {
    familyData *tempNode = root ;
    tempNode->name = name;

    while (tempNode != NULL)
    {
        if (tempNode->name > name)
            tempNode = tempNode->rChild;
        else if (tempNode->name < name)
            tempNode = tempNode->lChild;
        else 
            return true;
    }
    return false;
 }

void familyData ::deleteFamilyMember(string name)
{
    deleteNode(name, root);
}

void familyData::deleteNode(string name, familyData *&nodePtr)
{
    if (name < nodePtr->name)
        deleteNode(name, nodePtr->lChild);
    else if (name > nodePtr->name)
        deleteNode(name, nodePtr->rChild);
    else
        makeDeletion(nodePtr);
}

void familyData::makeDeletion(familyData *&nodePtr)
{
    familyData *tempNodePtr; // Temporary pointer, used in
    // reattaching the left subtree.
    if (nodePtr == NULL)
        cout << "Cannot delete empty node.\n";
    else if (nodePtr->rChild == NULL)
    {
        tempNodePtr = nodePtr;
        nodePtr = nodePtr->lChild;
        // Reattach the left child
        delete tempNodePtr;
    }
    else if (nodePtr->lChild == NULL)
    {
        tempNodePtr = nodePtr;
        nodePtr = nodePtr->rChild;
        // Reattach the right child
        delete tempNodePtr;
    }
    // If the node has two children.
    else
    {
        // Move one node the right.
        tempNodePtr = nodePtr->rChild;
        // Go to the end left node.
        while (tempNodePtr->lChild)
            tempNodePtr = tempNodePtr->lChild;
        // Reattach the left subtree.
        tempNodePtr->lChild = nodePtr->lChild;
        tempNodePtr = nodePtr;
        // Reattach the right subtree.
        nodePtr = nodePtr->rChild;
        delete tempNodePtr;
    }
}