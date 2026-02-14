#include <stdio.h>
int main(){
int a[3][3]={{1,2,3},{4,1,2},{5,4,1}},flag=1;
for(int i=0;i<2;i++)
for(int j=0;j<2;j++)
if(a[i][j]!=a[i+1][j+1]) flag=0;

printf(flag?"Yes":"No");
}
