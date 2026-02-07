#include <stdio.h>
int main(){
int a[6]={1,2,3,0,0,0},b[]={2,5,6};
int i=2,j=2,k=5;
while(j>=0){
if(i>=0 && a[i]>b[j]) a[k--]=a[i--];
else a[k--]=b[j--];
}
for(int x=0;x<6;x++) printf("%d ",a[x]);
}
