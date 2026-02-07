#include <stdio.h>
int f(int n){ return n<=1?n:f(n-1)+f(n-2); }
int main(){ printf("%d",f(6)); }
