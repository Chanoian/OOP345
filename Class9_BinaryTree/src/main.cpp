#include <iostream>
#include "binaryTree.h"

using namespace std ;
binaryTree myBinaryTree;

int main() 
{
    cout << "Hello Easy C++ project!" << endl;
    myBinaryTree.insertNode(1);
    myBinaryTree.insertNode(6);
    myBinaryTree.insertNode(7);
    myBinaryTree.insertNode(2);
    myBinaryTree.insertNode(100);
    myBinaryTree.insertNode(-1);
    myBinaryTree.insertNode(-20);
    cout << "Hello Easy C++ project!" << endl;
    myBinaryTree.showNodesInOrder();
    
    return 0 ;
}