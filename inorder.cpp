#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

void Inorder(struct Node* node){
    if(node==NULL)
        return;
    cout<<node->data<<" ";
    Inorder(node->left);
    Inorder(node->right);
}

int main(){
    struct Node* root = new Node(4);
    root -> left = new Node(2);
    root -> right = new Node(8);
    root -> left -> left = new Node(9);
    root -> left -> right = new Node(20);
    root -> right -> left = new Node(40);
    root -> right -> right = new Node(42);
    Inorder(root);
}
