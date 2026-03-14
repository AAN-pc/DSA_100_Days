#include <stdio.h>

int main(){
    int a[]={1,3,-1,-3,5},k=3;
    for(int i=0;i<=5-k;i++){
        int max=a[i];
        for(int j=i;j<i+k;j++)
            if(a[j]>max) max=a[j];
        printf("%d ",max);
    }
}
