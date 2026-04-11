#include <stdio.h>

int main(){
    int q[10], front=0,rear=0;
    int g[3][3]={{0,1,1},{1,0,0},{1,0,0}};
    int visited[3]={0};

    q[rear++]=0;
    visited[0]=1;

    while(front<rear){
        int v=q[front++];
        printf("%d ",v);

        for(int i=0;i<3;i++){
            if(g[v][i] && !visited[i]){
                q[rear++]=i;
                visited[i]=1;
            }
        }
    }
}
