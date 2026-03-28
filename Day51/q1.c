#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *left,*right;
};

struct Node* newNode(int x){
    struct Node* t=malloc(sizeof(struct Node));
    t->data=x; t->left=t->right=NULL;
    return t;
}

struct Node* LCA(struct Node* root,int a,int b){
    if(!root) return NULL;
    if(root->data > a && root->data > b)
        return LCA(root->left,a,b);
    if(root->data < a && root->data < b)
        return LCA(root->right,a,b);
    return root;
}

int main(){
    struct Node* root=newNode(20);
    root->left=newNode(10);
    root->right=newNode(30);
    struct Node* ans=LCA(root,10,30);
    printf("%d",ans->data);
}
