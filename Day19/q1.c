#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a,const void* b){return *(int*)a-*(int*)b;}
int main(){
int a[]={-1,2,1,-4},n=4;
qsort(a,n,sizeof(int),cmp);
int l=0,r=n-1,sum=9999;
while(l<r){
int s=a[l]+a[r];
if(abs(s)<abs(sum)) sum=s;
if(s<0) l++; else r--;
}
printf("%d",sum);
}
