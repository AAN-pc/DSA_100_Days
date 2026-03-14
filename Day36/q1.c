#include <stdio.h>
#define MAX 5
int q[MAX], front=0, rear=0;

int main(){
    q[rear++]=1;
    q[rear++]=2;
    printf("%d",q[front++]);
}
