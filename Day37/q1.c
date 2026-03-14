#include <stdio.h>

int main(){
    int a[]={5,3,8,1},n=4;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]<a[j]){
                int t=a[i]; a[i]=a[j]; a[j]=t;
            }
    printf("%d",a[0]);
}
