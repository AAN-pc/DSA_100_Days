#include <stdio.h>
int main(){
int a[]={5,-3,5},max=a[0],cur=0;
for(int i=0;i<3;i++){
cur+=a[i];
if(cur>max) max=cur;
if(cur<0) cur=0;
}
printf("%d",max);
}
