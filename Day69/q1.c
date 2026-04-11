#include <stdio.h>
#define V 3
#define INF 9999

int main(){
    int g[V][V]={{0,1,4},{1,0,2},{4,2,0}};
    int dist[V]={0,INF,INF}, visited[V]={0};

    for(int i=0;i<V;i++){
        int u=-1;
        for(int j=0;j<V;j++)
            if(!visited[j] && (u==-1 || dist[j]<dist[u]))
                u=j;

        visited[u]=1;

        for(int v=0;v<V;v++)
            if(g[u][v] && dist[u]+g[u][v]<dist[v])
                dist[v]=dist[u]+g[u][v];
    }

    for(int i=0;i<V;i++) printf("%d ",dist[i]);
}
