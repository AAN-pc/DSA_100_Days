#include <stdio.h>
int main(){
int a[]={1,2,4,5},n=5,sum=0;
for(int i=0;i<n-1;i++) sum+=a[i];
printf("%d", n*(n+1)/2 - sum);
}
