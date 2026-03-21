#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *left,*right;
};

struct Node* insert(struct Node* root,int x){
    if(!root){
        struct Node* t=malloc(sizeof(struct Node));
        t->data=x; t->left=t->right=NULL;
        return t;
    }
    if(x<root->data) root->left=insert(root->left,x);
    else root->right=insert(root->right,x);
    return root;
}
