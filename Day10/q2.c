#include <stdio.h>
int main(){
int a[]={1,2,2,1},b[]={2,2};
for(int i=0;i<4;i++)
for(int j=0;j<2;j++)
if(a[i]==b[j]) printf("%d ",a[i]);
}
