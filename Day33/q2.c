#include <stdio.h>

int main(){
    int st[10], top=-1;
    st[++top]=2; st[++top]=3;
    int b=st[top--], a=st[top--];
    st[++top]=a+b;
    printf("%d",st[top]);
}
