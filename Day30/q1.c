#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff, pow;
    struct Node* next;
};

int main(){
    struct Node* head=NULL,*temp;

    for(int i=0;i<3;i++){
        temp = malloc(sizeof(struct Node));
        temp->coeff = i+1;
        temp->pow = i;
        temp->next = head;
        head = temp;
    }

    while(head){
        printf("%dx^%d ", head->coeff, head->pow);
        head=head->next;
    }
}
