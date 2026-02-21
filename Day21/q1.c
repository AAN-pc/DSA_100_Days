#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *temp, *curr;

    // Create list: 1->2->3
    for(int i = 3; i >= 1; i--) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = i;
        temp->next = head;
        head = temp;
    }

    curr = head;
    while(curr) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
}
