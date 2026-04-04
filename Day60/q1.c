#include <stdio.h>

int isMinHeap(int a[],int n){
    for(int i=0;i<=(n-2)/2;i++){
        if(a[i]>a[2*i+1] || (2*i+2<n && a[i]>a[2*i+2]))
            return 0;
    }
    return 1;
}

int main(){
    int a[]={1,3,5,7,9};
    printf("%d",isMinHeap(a,5));
}
