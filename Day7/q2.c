#include <stdio.h>
int main(){
int n=6,a=0,b=1,c;
for(int i=2;i<=n;i++){ c=a+b; a=b; b=c; }
printf("%d",b);
}
