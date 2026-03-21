#include <stdio.h>

void preorder(int a[], int i, int n){
    if(i>=n) return;
    printf("%d ",a[i]);
    preorder(a,2*i+1,n);
    preorder(a,2*i+2,n);
}

int main(){
    int a[]={1,2,3,4,5};
    preorder(a,0,5);
}
