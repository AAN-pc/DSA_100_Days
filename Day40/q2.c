#include <stdio.h>

int main(){
    int t[]={73,74,75,71,69,72,76,73},res[8]={0},st[8],top=-1;
    for(int i=0;i<8;i++){
        while(top>=0 && t[i]>t[st[top]]){
            int idx=st[top--];
            res[idx]=i-idx;
        }
        st[++top]=i;
    }
    for(int i=0;i<8;i++) printf("%d ",res[i]);
}
