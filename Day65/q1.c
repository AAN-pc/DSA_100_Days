#include <stdio.h>

int dfs(int g[3][3], int v, int visited[], int parent){
    visited[v]=1;
    for(int i=0;i<3;i++){
        if(g[v][i]){
            if(!visited[i]){
                if(dfs(g,i,visited,v)) return 1;
            } else if(i!=parent){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int g[3][3]={{0,1,1},{1,0,1},{1,1,0}};
    int visited[3]={0};
    printf("%d",dfs(g,0,visited,-1));
}
