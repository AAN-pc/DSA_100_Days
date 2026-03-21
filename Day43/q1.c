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

int main(){
    struct Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    printf("%d",root->data);
}
