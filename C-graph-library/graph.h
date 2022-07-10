//
// Created by budda mohan chandu on 06/02/22.
//

#ifndef SYGSYS_A1_GRAPH_H
#define SYGSYS_A1_GRAPH_H


typedef struct _GRAPH{
    int non;
    int** arr;
}GRAPH;

GRAPH readGraph(char *FName);
void DFS(GRAPH G);
void BFS(GRAPH G);
void MST(GRAPH G);

#endif //SYGSYS_A1_GRAPH_H
