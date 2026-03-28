#include <stdio.h>
#include <stdbool.h>

bool isSym(int a[],int i,int j){
    if(i>=j) return true;
    if(a[i]!=a[j]) return false;
    return isSym(a,i+1,j-1);
}

int main(){
    int a[]={1,2,3,2,1};
    printf("%d",isSym(a,0,4));
}
