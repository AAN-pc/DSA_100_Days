#include <stdio.h>
int main(){
int p[]={7,1,5,3,6,4},min=p[0],profit=0;
for(int i=1;i<6;i++){
if(p[i]<min) min=p[i];
else if(p[i]-min>profit) profit=p[i]-min;
}
printf("%d",profit);
}
