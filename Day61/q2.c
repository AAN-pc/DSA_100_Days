#include <stdio.h>

void dfs(int g[3][3], int v, int visited[]){
    visited[v]=1;
    for(int i=0;i<3;i++)
        if(g[v][i] && !visited[i])
            dfs(g,i,visited);
}

int main(){
    int g[3][3]={{1,1,0},{1,1,0},{0,0,1}};
    int visited[3]={0}, count=0;

    for(int i=0;i<3;i++){
        if(!visited[i]){
            dfs(g,i,visited);
            count++;
        }
    }
    printf("%d",count);
}
