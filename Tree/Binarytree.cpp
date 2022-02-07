// Height max min size ............binary tree
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
int size(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ls = size(root->left);
    int rs = size(root->right);
    int ts = ls + rs + 1;
    return ts;
}
int sum(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lsm = sum(root->left);
    int rsm = sum(root->right);
    int tsm = lsm + rsm + root->data;
    return tsm;
}
int Max(Node *root)
{
    if (root == NULL)
        return INT16_MIN;
    int lm = Max(root->left);
    int rm = Max(root->right);
    int tm = max((root->data), max(lm, rm));
    return tm;
}
int height(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    int tl = max(lh, rh) + 1;
    return tl;
}
int numNodes(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + numNodes(root->left) + numNodes(root->right);
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << "Max is : " << Max(root) << endl;
    cout << "Size of binary tree is : " << size(root) << endl;
    cout << "Height of binary tree is : " << height(root) << endl;
    cout << "Sum is : " << sum(root) << endl;
    cout << "Number of nodes is : " << numNodes(root) << endl;
}