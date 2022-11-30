#include <iostream>
using namespace std;

class node
{
    int data;
    struct node *left;
    struct node *right;

public:
    static node *createNode(int val)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = val;
        temp->left = temp->right = NULL;
        return temp;
    }

    void preOrder(struct node *root)
    {
        if (root != NULL)
        {
            cout << root->data << " ";
            preOrder(root->left);
            preOrder(root->right);
        }
    }

    void postOrder(struct node *root)
    {
        if (root != NULL)
        {
            postOrder(root->left);
            postOrder(root->right);
            cout << root->data << " ";
        }
    }

    void inOrder(struct node *root)
    {
        if (root != NULL)
        {
            inOrder(root->left);
            cout << root->data << " ";
            inOrder(root->right);
        }
    }

    node *insertNode(struct node *node, int val)
    {
        if (node == NULL)
            return createNode(val);
        if (val < node->data)
            node->left = insertNode(node->left, val);
        else if (val > node->data)
            node->right = insertNode(node->right, val);
        return node;
    }
};

int main()
{
    struct node *root = NULL;
    root = root->insertNode(root, 4);
    root->insertNode(root, 5);
    root->insertNode(root, 2);
    root->insertNode(root, 9);
    root->insertNode(root, 1);
    root->insertNode(root, 3);
    cout << "Pre-Order traversal of the Binary Search Tree is: ";
    root->preOrder(root);
    cout << "\n";

    cout << "post-Order traversal of the Binary Search Tree is: ";
    root->postOrder(root);
    cout << "\n";

    cout << "in-Order traversal of the Binary Search Tree is: ";
    root->inOrder(root);
    cout << "\n";
    free(root);
    return 0;
}