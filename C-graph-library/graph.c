//
// Created by budda mohan chandu on 06/02/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "llist.h"
#include "stack.h"
#include "queue.h"
#include "uFind.h"
#include "graph.h"

GRAPH readGraph(char *FName){
//    FILE *fptr;
    int n,m,a,b,w;
    FILE *fptr = fopen(FName,"r");

    fscanf(fptr," %d ",&n);
    fscanf(fptr," %d ",&m);

    GRAPH G;
    G.non=malloc(sizeof(int ));
    G.non=n;
    G.arr = (int **)malloc(n*sizeof(int*));
    for (int i = 0; i < n; ++i) {
        G.arr[i]= (int *) malloc(n*sizeof(int));
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            G.arr[i][j]=0;
        }
    }

    for (int i = 0; i < m; ++i){
        fscanf(fptr," %d %d %d ",&a,&b,&w);
        G.arr[a][b]=w;
        G.arr[b][a]=w;
    }
    return G;

}

void DFS(GRAPH G){
    STACK S;
    int n,k=0;
    n=G.non;
    int* visited;
    visited=(int*) malloc(n*sizeof (int));
    for (int i = 0; i < n; ++i) {
        visited[i]=0;
    }
    S = createStack();
    S=push(S,k);
    printf("%d ",k);
    visited[k]=1;
    while (!isEmptyStack(S)){
        S=pop(S,&k);
        for (int i = 0; i < n; ++i) {
            if(G.arr[k][i]!=0 && !visited[i]){
                S=push(S,i);
                visited[i]=1;
                printf("%d ",i);
            }
        }
    }
    printf("--\n");

}

void BFS(GRAPH G){
    QUEUE Q;
    int n,k=0;
    n=G.non;

    int* visited;
    visited=(int*) malloc(n*sizeof (int));
    for (int i = 0; i < n; ++i) {
        visited[i]=0;
    }

    Q = createQueue();
    Q=enqueue(Q,k);
    printf("%d ",k);
    visited[k]=1;
    while (!isEmptyQueue(Q)){
        Q=dequeue(Q,&k);
        for (int i = 0; i < n; ++i) {
            if(G.arr[k][i]!=0&& !visited[i]){
                Q=enqueue(Q,i);
                visited[i]=1;
                printf("%d ",i);
            }
        }
    }
    printf("--\n");
}

void MST(GRAPH G){
    int n=G.non;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(G.arr[i][j]==0)G.arr[i][j]=9999;
        }
    }
    int count=0,l=0,weight=0;
    UNION_FIND F= createUF(n);
    for (int i = 0; i < n; ++i) {
        F=makeSetUF(F,i,&l);
    }
    while (1){
        int min=9999;
        int h,k;
        for ( int i = 0; i < n; ++i) {
            for ( int j = 0; j < n; ++j) {
                if(G.arr[i][j]<min){
                    min=G.arr[i][j];
                    h=i;
                    k=j;
                }
            }
        }

        if(findUF(F,h)!= findUF(F,k)){
            unionUF(F,h,k);
            printf("%d %d %d\n",h,k,G.arr[h][k]);
            weight+=G.arr[h][k];
            count++;
        }
        G.arr[h][k]=9999;
        if(count==n-1){
            break;
        }
    }
    printf("%d\n",weight);

}

