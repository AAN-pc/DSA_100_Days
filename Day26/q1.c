#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

int main() {
    struct Node *head = NULL, *temp, *curr;

    // Insert at beginning
    for(int i = 1; i <= 3; i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = i;
        temp->prev = NULL;
        temp->next = head;

        if(head != NULL)
            head->prev = temp;

        head = temp;
    }

    curr = head;
    while(curr) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
}
