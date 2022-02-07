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
    cout << "Enter data : " << endl;
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
//8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1 
int main()
{
    Node *root = takeInput();
    printTree(root);
}