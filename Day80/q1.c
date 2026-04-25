#include <stdio.h>
#define V 3
#define INF 9999

int main(){
    int dist[V][V]={{0,5,INF},{INF,0,3},{INF,INF,0}};

    for(int k=0;k<V;k++)
        for(int i=0;i<V;i++)
            for(int j=0;j<V;j++)
                if(dist[i][k]+dist[k][j] < dist[i][j])
                    dist[i][j]=dist[i][k]+dist[k][j];

    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++)
            printf("%d ",dist[i][j]);
        printf("\n");
    }
}
