#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head=NULL,*temp;
    int count=0;

    for(int i=0;i<5;i++){
        temp = malloc(sizeof(struct Node));
        temp->data = i;
        temp->next = head;
        head = temp;
    }

    while(head){
        count++;
        head=head->next;
    }

    printf("%d",count);
}
