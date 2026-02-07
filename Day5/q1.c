#include <stdio.h>
int main(){
int a[]={5,1,3,2},n=4;
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)
if(a[i]>a[j]){
int t=a[i]; a[i]=a[j]; a[j]=t;
}
for(int i=0;i<n;i++) printf("%d ",a[i]);
}
