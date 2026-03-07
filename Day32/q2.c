#include <stdio.h>

int main(){
    int stack[]={3,5,2,1}, min=stack[0];
    for(int i=1;i<4;i++)
        if(stack[i]<min) min=stack[i];
    printf("%d",min);
}
