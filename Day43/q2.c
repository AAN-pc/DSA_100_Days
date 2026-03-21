#include <stdio.h>
#include <stdlib.h>

struct Node{
    int val;
    struct Node *left,*right;
};

void inorder(struct Node* root){
    if(!root) return;
    inorder(root->left);
    printf("%d ",root->val);
    inorder(root->right);
}
