#include <stdio.h>

int main(){
    int arr[]={1,2,3,4,5},key=3,n=5,k=0;

    for(int i=0;i<n;i++){
        if(arr[i]!=key)
            arr[k++]=arr[i];
    }

    for(int i=0;i<k;i++) printf("%d ",arr[i]);
}
