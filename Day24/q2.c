#include <stdio.h>

int main(){
    int arr[]={1,2,6,3,4,5,6},val=6,n=7,k=0;

    for(int i=0;i<n;i++){
        if(arr[i]!=val)
            arr[k++]=arr[i];
    }

    for(int i=0;i<k;i++) printf("%d ",arr[i]);
}
