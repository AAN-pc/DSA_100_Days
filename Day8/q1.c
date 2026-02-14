#include <stdio.h>
int p(int x,int n){ return n==0?1:x*p(x,n-1); }
int main(){ printf("%d",p(2,5)); }
