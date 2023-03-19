#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=right= NULL;
    }
};

void BFS(Node* root){
    if(root == NULL)
        return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int nodeCount = q.size();
        while(nodeCount>0){
        Node* temp = q.front();
        q.pop();
        if(temp-> left !=NULL)
            q.push(temp->left);
        if(temp->right != NULL)
            q.push(temp->right);
            nodeCount--;
        cout<<temp->data<<" ";
    }
    cout<<endl;
    }
}

int main(){
    struct Node* root = new Node(4);
    root -> left = new Node(5);
    root -> right = new Node(6);
    root -> left -> left = new Node(7);
    root -> left -> right = new Node(8);
    root -> right -> left = new Node(9);
    root -> right -> right = new Node(10);
    BFS(root);
    return 0;
}
