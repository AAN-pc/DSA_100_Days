#include <stdio.h>
#define MAX 5
int stack[MAX], top = -1;

void push(int x){ if(top<MAX-1) stack[++top]=x; }
int pop(){ return (top>=0)?stack[top--]:-1; }

int main(){
    push(10); push(20);
    printf("%d ", pop());
    printf("%d ", pop());
}
