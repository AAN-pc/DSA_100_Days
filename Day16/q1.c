#include <stdio.h>
int main(){
int a[]={1,2,2,3,3,3},n=6;
for(int i=0;i<n;i++){
int count=1;
for(int j=i+1;j<n;j++)
if(a[i]==a[j]) count++;
printf("%d:%d\n",a[i],count);
}
}
