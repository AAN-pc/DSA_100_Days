#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *left,*right;
};

struct Node* LCA(struct Node* root,int a,int b){
    if(!root) return NULL;
    if(root->data==a || root->data==b) return root;

    struct Node* left=LCA(root->left,a,b);
    struct Node* right=LCA(root->right,a,b);

    if(left && right) return root;
    return left?left:right;
}
