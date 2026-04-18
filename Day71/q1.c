#include <stdio.h>

int main(){
    int hash[10]={0}, key=5;
    int idx=key%10;

    while(hash[idx]!=0)
        idx=(idx+idx*idx)%10;

    hash[idx]=key;
    printf("Inserted at %d",idx);
}
