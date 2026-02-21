#include <stdio.h>
int main(){
int a[]={1,-1,2,-2,3},count=0;
for(int i=0;i<5;i++){
int sum=0;
for(int j=i;j<5;j++){
sum+=a[j];
if(sum==0) count++;
}
}
printf("%d",count);
}
