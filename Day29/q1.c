#include <stdio.h>

void rotate(int a[], int n, int k){
    k %= n;
    int temp[100];

    for(int i=0;i<n;i++)
        temp[(i+k)%n]=a[i];

    for(int i=0;i<n;i++)
        a[i]=temp[i];
}

int main(){
    int a[]={1,2,3,4,5},n=5,k=2;
    rotate(a,n,k);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
