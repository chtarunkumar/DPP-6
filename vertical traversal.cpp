
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

void verticalTraversal(Node* root)
{
    if(root == NULL)
        return;
    unordered_map<int, vector<int>> m;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    int val = 0, mn = 0, mx = 0;
    while(!q.empty())
    {
        auto t = q.front();
        q.pop();
        Node* node = t.first;
        val = t.second;
        m[val].push_back(node->data);
        if(node->left != NULL)
            q.push({node->left, val-1});
        if(node->right != NULL)
            q.push({node->right, val+1});

        if(mn > val)
            mn = val;
        if(mx < val)
            mx = val;
    }

    for(int i=mn; i<=mx; i++)
    {
        vector<int> t = m[i];
        for(int j=0; j<t.size(); j++)
        {
            cout << t[j] << " ";
        }
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

    verticalTraversal(root);
}
