#include <stdio.h>
int main(){
int a[]={-1,0,1,2,-1,-4},n=6;
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)
for(int k=j+1;k<n;k++)
if(a[i]+a[j]+a[k]==0)
printf("%d %d %d\n",a[i],a[j],a[k]);
}
