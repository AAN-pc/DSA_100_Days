#include <stdio.h>

int main(){
    int a[]={4,5,8,2},k=2;
    for(int i=0;i<4;i++)
        for(int j=i+1;j<4;j++)
            if(a[i]<a[j]){
                int t=a[i]; a[i]=a[j]; a[j]=t;
            }
    printf("%d",a[k-1]);
}
