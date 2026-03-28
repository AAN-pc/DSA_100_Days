#include <stdio.h>

int search(int a[], int n, int key){
    for(int i=0;i<n;i++)
        if(a[i]==key) return i;
    return -1;
}

int main(){
    int a[]={1,2,3};
    printf("%d",search(a,3,2));
}
