
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int d)
{
    Node* t = new Node;
    t->data = d;
    t->left = NULL;
    t->right = NULL;
    return t;
}

void rightView(Node* node)
{
    if(node == NULL)
        return;
    queue<Node*> q;
    q.push(node);
    while(!q.empty())
    {
        int nodeCount = q.size();
        for(int i=0; i<nodeCount; i++)
        {
            Node* t = q.front();
            q.pop();
            if(i == nodeCount-1)
                cout << t->data << " ";
            if(t->left != NULL)
                q.push(t->left);
            if(t->right != NULL)
                q.push(t->right);
        }
        cout << endl;
    }
}

int main()
{
    Node* root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(40);
    root->left->right = newNode(50);
    root->right->left = newNode(60);
    root->right->right = newNode(70);

    rightView(root);
}





