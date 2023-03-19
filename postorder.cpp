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

void postorder(struct Node* node){
    if(node == NULL)
        return;
    cout<<node->data<<" ";
    postorder(node->left);
    postorder(node->right);
}

int main(){
    struct Node* root= new Node(5);
    root -> left = new Node(6);
    root -> right = new Node(4);
    root -> left -> left = new Node(3);
    root -> left -> right = new Node(8);
    root -> right -> left = new Node(2);
    postorder(root);
}
