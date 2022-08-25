#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

void printTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << ":";
    if (root->left)
    {
        cout << " L : " << root->left->data;
    }

    if (root->right)
    {
        cout << " R : " << root->right->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}

int main()
{
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
    BinaryTreeNode<int> *node3 = new BinaryTreeNode<int>(4);

    root->left = node1;
    root->right = node2;
    node1->left = node3;

    printTree(root);
    delete root;
}