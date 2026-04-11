#include <stdio.h>

void topo(int g[4][4], int v, int visited[], int stack[], int *top){
    visited[v]=1;
    for(int i=0;i<4;i++)
        if(g[v][i] && !visited[i])
            topo(g,i,visited,stack,top);

    stack[++(*top)]=v;
}

int main(){
    int g[4][4]={{0,1,1,0},{0,0,0,1},{0,0,0,1},{0,0,0,0}};
    int visited[4]={0}, stack[4], top=-1;

    for(int i=0;i<4;i++)
        if(!visited[i])
            topo(g,i,visited,stack,&top);

    while(top>=0) printf("%d ",stack[top--]);
}
