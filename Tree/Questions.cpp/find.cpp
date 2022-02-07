#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
void printTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    if (root->left != NULL)
    {
        cout << "L" << root->left->data;
    }
    if (root->right != NULL)
    {
        cout << "R" << root->right->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}
Node *takeInput()
{
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    Node *root = new Node(rootData);
    Node *leftchild = takeInput();
    Node *rightchild = takeInput();
    root->left = leftchild;
    root->right = rightchild;
    return root;
}
int main()
{
    Node *root = takeInput();
    printTree(root);
}