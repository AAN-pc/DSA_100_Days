#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node *front=NULL, *rear=NULL;

void enqueue(int x){
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;

    if(rear==NULL){
        front=rear=temp;
        return;
    }
    rear->next=temp;
    rear=temp;
}

int dequeue(){
    if(front==NULL) return -1;
    int val=front->data;
    struct Node* temp=front;
    front=front->next;
    free(temp);
    return val;
}

int main(){
    enqueue(10); enqueue(20);
    printf("%d ",dequeue());
}
