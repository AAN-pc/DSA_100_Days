#include <stdio.h>
#define MAX 5
int st[MAX], top=-1;

int main(){
    st[++top]=1;
    st[++top]=2;
    printf("%d ", st[top--]);
}
