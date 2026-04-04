#include <stdio.h>

void dfs(int g[4][4], int v, int visited[]){
    visited[v]=1;
    printf("%d ",v);
    for(int i=0;i<4;i++)
        if(g[v][i] && !visited[i])
            dfs(g,i,visited);
}

int main(){
    int g[4][4]={{0,1,1,0},{1,0,0,1},{1,0,0,0},{0,1,0,0}};
    int visited[4]={0};
    dfs(g,0,visited);
}
