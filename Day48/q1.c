#include <stdio.h>

int countLeaves(int a[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(2*i+1>=n && 2*i+2>=n)
            count++;
    }
    return count;
}

int main(){
    int a[]={1,2,3,4,5};
    printf("%d",countLeaves(a,5));
}
