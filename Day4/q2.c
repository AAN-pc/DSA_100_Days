#include <stdio.h>
int main(){
int a[]={3,2,2,3},val=3,n=4,k=0;
for(int i=0;i<n;i++)
if(a[i]!=val) a[k++]=a[i];
printf("%d",k);
}
