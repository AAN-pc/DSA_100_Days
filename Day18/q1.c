#include <stdio.h>
void rev(int a[],int l,int r){
while(l<r){int t=a[l];a[l]=a[r];a[r]=t;l++;r--;}
}
int main(){
int a[]={1,2,3,4,5},k=2,n=5;
rev(a,0,n-1); rev(a,0,k-1); rev(a,k,n-1);
for(int i=0;i<n;i++) printf("%d ",a[i]);
}
