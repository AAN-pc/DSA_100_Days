#include <stdio.h>

int main(){
    int slow=0,fast=0,n=10;

    while(fast<n && fast+1<n){
        slow++;
        fast+=2;
    }

    printf("Cycle detection logic applied");
}
