#include <stdio.h>
int main(){
int a[]={2,7,11,15},t=9;
for(int i=0;i<4;i++)
for(int j=i+1;j<4;j++)
if(a[i]+a[j]==t) printf("%d %d",i,j);
}
