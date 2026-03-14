#include <stdio.h>

void reverse(int q[], int n){
    int st[100], top=-1;
    for(int i=0;i<n;i++) st[++top]=q[i];
    for(int i=0;i<n;i++) q[i]=st[top--];
}

int main(){
    int q[]={1,2,3,4};
    reverse(q,4);
    for(int i=0;i<4;i++) printf("%d ",q[i]);
}
