#include <stdio.h>
#define V 3
#define INF 9999

int main(){
    int edges[3][3]={{0,1,4},{1,2,3},{0,2,10}};
    int dist[V]={0,INF,INF};

    for(int i=0;i<V-1;i++){
        for(int j=0;j<3;j++){
            int u=edges[j][0], v=edges[j][1], w=edges[j][2];
            if(dist[u]+w < dist[v])
                dist[v]=dist[u]+w;
        }
    }

    for(int i=0;i<V;i++) printf("%d ",dist[i]);
}
