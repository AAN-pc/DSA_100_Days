#include <stdio.h>
int main(){
int a[]={1,2,3,4,5},k=2,n=5;
int temp[5];
for(int i=0;i<n;i++)
temp[(i+k)%n]=a[i];
for(int i=0;i<n;i++) printf("%d ",temp[i]);
}
