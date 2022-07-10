#include <stdio.h>
#include <stdlib.h>
#include <graph.h>

int main(){
    GRAPH G;
    G=readGraph("input.txt");
    DFS(G);
    BFS(G);
    MST(G);
    return 0;
}
