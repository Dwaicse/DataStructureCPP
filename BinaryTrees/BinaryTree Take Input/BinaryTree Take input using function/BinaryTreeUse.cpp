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

BinaryTreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter Data: " << endl;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftchild = takeInput();
    BinaryTreeNode<int> *rightchild = takeInput();

    root->left = leftchild;
    root->right = rightchild;

    return root;
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();

    printTree(root);
    delete root;

    return 0;
}