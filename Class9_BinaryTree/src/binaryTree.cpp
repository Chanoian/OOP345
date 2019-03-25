#include <iostream>
#include "binaryTree.h"

using namespace std;

Node *treeNode;

binaryTree ::binaryTree(void)

{
    root = NULL;
}

void binaryTree ::insertNode(int value)
{
    Node *newNode = new (Node);
    newNode->value = value;
    if (root == NULL) // This means the Binary tree is empty.
    {
        root = newNode;
        //root->right = root->left = NULL;
    }
    else
    {
        Node *tempNode = root; //We will Use this node to traverse the Tree.
        while (tempNode != NULL)
        {
            if (value > tempNode->value) //If the new value is greater
            {
                if (tempNode->right) // If the node exists
                    tempNode = tempNode->right;
                else
                    tempNode->right = newNode;
                break;
            }
            else if (value < tempNode->value) // If the new Value is smaller
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

void binaryTree ::inOrderPrintTree(Node *treeNode) //The Current Node is in the middle.
{
    if (treeNode)
    {
        inOrderPrintTree(treeNode->left);
        cout << treeNode->value << endl;
        inOrderPrintTree(treeNode->right);
    }
}

void binaryTree ::preOrderPrintTree(Node *treeNode) //The Current Node is the first.
{
    if (treeNode)
    {
        cout << treeNode->value << endl;
        preOrderPrintTree(treeNode->left);
        preOrderPrintTree(treeNode->right);
    }
}

void binaryTree ::postOrderPrintTree(Node *treeNode) // The Current Node is the last.
{
    if (treeNode)
    {
        postOrderPrintTree(treeNode->left);
        postOrderPrintTree(treeNode->right);
        cout << treeNode->value << endl;
    }
}