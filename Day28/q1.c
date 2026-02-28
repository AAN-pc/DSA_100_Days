#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head=NULL,*temp,*last=NULL;

    for(int i=1;i<=3;i++){
        temp = malloc(sizeof(struct Node));
        temp->data = i;

        if(head==NULL){
            head=temp;
            last=temp;
        } else {
            last->next=temp;
            last=temp;
        }
    }
    last->next = head; // circular

    temp = head;
    for(int i=0;i<3;i++){
        printf("%d ", temp->data);
        temp=temp->next;
    }
}
