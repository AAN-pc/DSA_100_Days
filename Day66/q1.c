#include <stdio.h>

int dfs(int g[3][3], int v, int visited[], int rec[]){
    visited[v]=rec[v]=1;

    for(int i=0;i<3;i++){
        if(g[v][i]){
            if(!visited[i] && dfs(g,i,visited,rec))
                return 1;
            else if(rec[i])
                return 1;
        }
    }
    rec[v]=0;
    return 0;
}

int main(){
    int g[3][3]={{0,1,0},{0,0,1},{1,0,0}};
    int visited[3]={0}, rec[3]={0};

    printf("%d",dfs(g,0,visited,rec));
}
