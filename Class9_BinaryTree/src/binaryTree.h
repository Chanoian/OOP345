#include <iostream>

using namespace std;

struct Node
{
    int value;
    Node *left;
    Node *right;
};

class binaryTree
{
  private:
    void preOrderPrintTree(Node *);
    void inOrderPrintTree(Node *);
    void postOrderPrintTree(Node *);

  public:
    Node *root;
    binaryTree(void);
    void insertNode(int);
    bool deleteNode(int);

    void showNodesInOrder(void)
    {
        inOrderPrintTree(root);
    }
    void showNodesPreOrder()
    {
        preOrderPrintTree(root);
    }
    void showNodesPostOrder()
    {
        postOrderPrintTree(root);
    }
};