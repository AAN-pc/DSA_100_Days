#include <stdio.h>

int main(){
    int a[]={1,-1,2,-2,3}, sum=0;

    for(int i=0;i<5;i++){
        sum+=a[i];
        if(sum==0) printf("Found");
    }
}
