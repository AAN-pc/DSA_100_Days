#include <stdio.h>

int main(){
    int arr[]={1,2,3,4,5}, n=5;

    for(int i=0;i<n/2;i++){
        int t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }

    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}
