#include <stdio.h>
int main(){
int a[]={10,20,30,40},k=30,c=0;
for(int i=0;i<4;i++){
c++;
if(a[i]==k){ printf("Found %d\n",i); break;}
}
printf("%d",c);
}
