#include <stdio.h>
int main(){
int a[]={1,1,2},n=3,k=1;
for(int i=1;i<n;i++)
if(a[i]!=a[i-1]) a[k++]=a[i];
printf("%d",k);
}
