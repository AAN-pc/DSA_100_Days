#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int x) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->val = x;
    temp->next = head;
    head = temp;
}

void print() {
    struct Node* t = head;
    while(t) {
        printf("%d ", t->val);
        t = t->next;
    }
}

int main() {
    insert(1);
    insert(2);
    insert(3);
    print();
}
