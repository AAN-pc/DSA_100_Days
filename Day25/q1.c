#include <stdio.h>

int main(){
    int arr[]={1,2,3,2,2,4},key=2,count=0;

    for(int i=0;i<6;i++)
        if(arr[i]==key) count++;

    printf("%d",count);
}
