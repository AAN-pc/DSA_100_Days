#include <stdio.h>
int main(){
int a[2][2]={{1,0},{3,4}};
if(a[0][1]==0){
a[0][0]=0; a[1][1]=0;
}
for(int i=0;i<2;i++){
for(int j=0;j<2;j++) printf("%d ",a[i][j]);
printf("\n");
}
}
