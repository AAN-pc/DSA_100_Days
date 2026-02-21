#include <stdio.h>
int main(){
int a[]={-2,1,-3,4,-1,2,1,-5,4},max=a[0],cur=0;
for(int i=0;i<9;i++){
cur+=a[i];
if(cur>max) max=cur;
if(cur<0) cur=0;
}
printf("%d",max);
}
