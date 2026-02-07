#include <stdio.h>
int main(){
int a[]={0,1,0,3,12},n=5,k=0;
for(int i=0;i<n;i++)
if(a[i]!=0) a[k++]=a[i];
while(k<n) a[k++]=0;
for(int i=0;i<n;i++) printf("%d ",a[i]);
}
